using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
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

    private string charName;
    private GameObject dodo_s;
    private GameObject titi_s;
    private GameObject dodo_f;
    private GameObject titi_f;

    private void Start()
    {
        successCanvas = GameObject.Find("Success");
        feedbackCanvas = GameObject.Find("FeedBack");
        successAudio = successCanvas.GetComponent<AudioSource>();
        feedbackAudio = feedbackCanvas.GetComponent<AudioSource>();
        loadAudio = GameObject.Find("4_0_11 배경").GetComponent<AudioSource>();
        dodo_s = GameObject.Find("Character_DoDo_s");
        titi_s = GameObject.Find("Character_TiTi_s");
        dodo_f = GameObject.Find("Character_DoDo_f");
        titi_f = GameObject.Find("Character_TiTi_f");

        charName = PlayerPrefs.GetString("char");

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

        //if (!File.Exists(Application.persistentDataPath + "/InfoData.json"))
        //{
        //    File.WriteAllText(Application.persistentDataPath + "/InfoData.json", "");
        //}

        if (File.Exists(Application.persistentDataPath + "/InfoData.json"))
        {
            //data 추가
            string info = File.ReadAllText(Application.persistentDataPath + "/InfoData.json");
            BodyData bodyData = JsonUtility.FromJson<BodyData>(info);
            bodyData.body.Add(data1);

            //data 저장
            File.WriteAllText(Application.persistentDataPath + "/InfoData.json", JsonUtility.ToJson(bodyData, true));
        }
        else
        {
            //data 저장
            File.WriteAllText(Application.persistentDataPath + "/InfoData.json", JsonUtility.ToJson(data1, true));
        }
    }

    IEnumerator waitSuccess(float seconds)
    {
        successCanvas.SetActive(true);
        if (charName.Equals("dodo") || charName.Equals(""))
        {
            dodo_s.SetActive(true);
            titi_s.SetActive(false);
        } else
        {
            dodo_s.SetActive(false);
            titi_s.SetActive(true);
        }
        practiceAudio.Play();
        yield return new WaitForSeconds(seconds);
        successAudio.Play();
        yield return new WaitForSeconds(3.5f);
        SceneManager.LoadScene(correctSceneName);
    }

    IEnumerator waitFeedback1(float seconds)
    {
        feedbackCanvas.SetActive(true);
        if (charName.Equals("dodo") || charName.Equals(""))
        {
            dodo_f.SetActive(true);
            titi_f.SetActive(false);
        }
        else
        {
            dodo_f.SetActive(false);
            titi_f.SetActive(true);
        }
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
        if (charName.Equals("dodo") || charName.Equals(""))
        {
            dodo_f.SetActive(true);
            titi_f.SetActive(false);
        }
        else
        {
            dodo_f.SetActive(false);
            titi_f.SetActive(true);
        }
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
