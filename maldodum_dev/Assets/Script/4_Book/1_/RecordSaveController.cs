using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RecordSaveController : MonoBehaviour
{
    public string answer;
    public int num;
    public string correctSceneName;
    public string wrongSceneName;
    public AudioSource practiceAudio;

    private GameObject successCanvas;
    private GameObject feedbackCanvas;
    private AudioSource successAudio;
    private AudioSource feedbackAudio;
    private AudioSource loadAudio;

    private void Start()
    {
        successCanvas = GameObject.Find("Success");
        feedbackCanvas = GameObject.Find("FeedBack");
        successAudio = successCanvas.GetComponent<AudioSource>();
        feedbackAudio = feedbackCanvas.GetComponent<AudioSource>();
        loadAudio = GameObject.Find("4_0_11 배경").GetComponent<AudioSource>();

        successCanvas.SetActive(false);
        feedbackCanvas.SetActive(false);
    }

    public void SttResultSave()
    {
        string sttResult = PlayerPrefs.GetString("sttResult");

        if (answer.Equals(sttResult))
        {
            InsertData(100);
            StartCoroutine(waitSuccess(2.5f));
        }
        else
        {
            InsertData(0);
            if (num == 1)
            {
                StartCoroutine(waitFeedback1(2.5f));
            }
            else
            {
                StartCoroutine(waitFeedback2(2.5f));
            }

        }
    }

    private void InsertData(int result)
    {
        //data 생성
        Data data1 = new Data();
        data1.word = answer;
        data1.accuracy = result;
        data1.date = DateTime.Now.ToString("dd");

        //data 추가
        string info = File.ReadAllText(Application.dataPath + "/InfoData.json");
        BodyData body = JsonUtility.FromJson<BodyData>(info);
        body.body.Add(data1);

        //data 저장
        File.WriteAllText(Application.dataPath + "/InfoData.json", JsonUtility.ToJson(body, true));
    }

    IEnumerator waitSuccess(float seconds)
    {
        successCanvas.SetActive(true);
        practiceAudio.Play();
        yield return new WaitForSeconds(seconds);
        successAudio.Play();
        yield return new WaitForSeconds(3.5f);
        SceneManager.LoadScene(correctSceneName);
    }

    IEnumerator waitFeedback1(float seconds)
    {
        feedbackCanvas.SetActive(true);
        practiceAudio.Play();
        yield return new WaitForSeconds(seconds);
        loadAudio.clip = Resources.Load("Feedback/꾸꾸_1,2차재시도공통") as AudioClip;
        loadAudio.Play();
        yield return new WaitForSeconds(2.2f);
        feedbackAudio.Play();
        yield return new WaitForSeconds(1.3f);
        loadAudio.clip = Resources.Load("Feedback/꾸꾸_1차재시도") as AudioClip;
        loadAudio.Play();
        yield return new WaitForSeconds(3.2f);
        SceneManager.LoadScene(wrongSceneName);
    }

    IEnumerator waitFeedback2(float seconds)
    {
        feedbackCanvas.SetActive(true);
        practiceAudio.Play();
        yield return new WaitForSeconds(seconds);
        loadAudio.clip = Resources.Load("Feedback/꾸꾸_1,2차재시도공통") as AudioClip;
        loadAudio.Play();
        yield return new WaitForSeconds(2.2f);
        feedbackAudio.Play();
        yield return new WaitForSeconds(1.3f);
        loadAudio.clip = Resources.Load("Feedback/꾸꾸_2차재시도") as AudioClip;
        loadAudio.Play();
        yield return new WaitForSeconds(3.2f);
        SceneManager.LoadScene(wrongSceneName);
    }
}
