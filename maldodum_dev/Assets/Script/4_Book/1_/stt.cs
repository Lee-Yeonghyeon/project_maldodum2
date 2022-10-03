using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Net;
using System.Text;
using System.IO;
using UnityEngine.Networking;
using UnityEngine.UI;

public class stt : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
	private string _microphoneID = null;
	private AudioClip _recording = null;
	private int _recordingLengthSec = 5;
	private int _recordingHZ = 22050;
	const int BlockSize_16Bit = 2;
	private string fileCheck;
	string url = "https://naveropenapi.apigw.ntruss.com/recog/v1/stt?lang=Kor";

	public string filename;

	public Image btn;
	public Sprite select_btn;
	public Sprite unSelect_btn;
	public bool isSelect = true;

	void Start()
	{
		_microphoneID = Microphone.devices[0];
	}

	// 버튼을 OnPointerDown 할 때 호출
	public void startRecording()
	{
		fileCheck = @"/Users/swumac/Desktop/project_maldodum/maldodum_dev/Assets/Audio/practice_files/" + filename + ".wav";

		if (File.Exists(fileCheck))
		{
			try
			{
				File.Delete(fileCheck);
			}
			catch (Exception e)
			{
				Console.WriteLine("The deletion failed: {0}", e.Message);
			}
		}

		Debug.Log("start recording");
		_recording = Microphone.Start(_microphoneID, false, _recordingLengthSec, _recordingHZ);
	}

	// 버튼을 OnPointerUp 할 때 호출
	public void stopRecording()
	{

		if (Microphone.IsRecording(_microphoneID))
		{
			Microphone.End(_microphoneID);

			Debug.Log("stop recording");
			if (_recording == null)
			{
				Debug.LogError("nothing recorded");
				return;
			}
			//audio clip to byte array
			//byte[] byteData = getByteFromAudioClip(_recording);

			// 녹음된 audioclip api 서버로 보냄
			//StartCoroutine(PostVoice(url, byteData));
			SavWav.Save("/Users/swumac/Desktop/project_maldodum/maldodum_dev/Assets/Audio/practice_files/" + filename, _recording);

			while (!File.Exists(fileCheck)) { }
			speechTransformText();
		}
		return;
	}

	// 받아온 값에 간편하게 접근하기 위한 JSON 선언
	[Serializable]
	public class VoiceRecognize
	{
		public string text;
	}

	private IEnumerator PostVoice(string url, byte[] data)
	{
		// request 생성
		WWWForm form = new WWWForm();
		UnityWebRequest request = UnityWebRequest.Post(url, form);

		// 요청 헤더 설정
		request.SetRequestHeader("X-NCP-APIGW-API-KEY-ID", "ex75mlx2mv");
		request.SetRequestHeader("X-NCP-APIGW-API-KEY", "GmvcS77loE4q0eVFmSS6vLiVBQ8JEICsRQRnuP4A");
		request.SetRequestHeader("Content-Type", "application/octet-stream");


		// 바디에 처리과정을 거친 Audio Clip data를 실어줌
		request.uploadHandler = new UploadHandlerRaw(data);

		// 요청을 보낸 후 response를 받을 때까지 대기
		yield return request.SendWebRequest();

		// 만약 response가 비어있다면 error
		if (request == null)
		{
			Debug.LogError(request.error);
		}
		else
		{
			// json 형태로 받음 {"text":"인식결과"}
			string message = request.downloadHandler.text;
			VoiceRecognize voiceRecognize = JsonUtility.FromJson<VoiceRecognize>(message);

			Debug.Log("Voice Server responded: " + voiceRecognize.text);
		}
	}

	private void speechTransformText()
	{
		string FilePath = $"/Users/swumac/Desktop/project_maldodum/maldodum_dev/Assets/Audio/practice_files/{filename}.wav";
		FileStream fs = new FileStream(FilePath, FileMode.Open, FileAccess.Read);
		byte[] fileData = new byte[fs.Length];
		fs.Read(fileData, 0, fileData.Length);
		fs.Close();

		string lang = "Kor";    // 언어 코드 ( Kor, Jpn, Eng, Chn )
		string url = $"https://naveropenapi.apigw.ntruss.com/recog/v1/stt?lang={lang}";
		HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
		request.Headers.Add("X-NCP-APIGW-API-KEY-ID", "ex75mlx2mv");
		request.Headers.Add("X-NCP-APIGW-API-KEY", "GmvcS77loE4q0eVFmSS6vLiVBQ8JEICsRQRnuP4A");
		request.Method = "POST";
		request.ContentType = "application/octet-stream";


		request.ContentLength = fileData.Length;
		using (Stream requestStream = request.GetRequestStream())
		{
			requestStream.Write(fileData, 0, fileData.Length);
			requestStream.Close();
		}
		HttpWebResponse response = (HttpWebResponse)request.GetResponse();
		Stream stream = response.GetResponseStream();
		StreamReader reader = new StreamReader(stream, Encoding.UTF8);
		string text = reader.ReadToEnd();
		stream.Close();
		response.Close();
		reader.Close();
		VoiceRecognize voiceRecognize = JsonUtility.FromJson<VoiceRecognize>(text);
		Debug.Log(voiceRecognize.text);
		PlayerPrefs.SetString("tx", voiceRecognize.text);
	}

	public void OnPointerDown(PointerEventData eventData)
	{
		startRecording();
		ChangeBtn();
	}

	public void OnPointerUp(PointerEventData eventData)
	{
		stopRecording();
		ChangeBtn();
	}

	public void ChangeBtn()
	{
		if (isSelect)
		{
			isSelect = false;
			btn.sprite = unSelect_btn;
		}
		else
		{
			isSelect = true;
			btn.sprite = select_btn;

		}
	}

}

