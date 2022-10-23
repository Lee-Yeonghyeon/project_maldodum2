using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RecordSaveController : MonoBehaviour
{
    public string answer;
    public string correctSceneName;
    public string wrongSceneName;
    public AudioSource practiceAudio;

    private GameObject successCanvas;
    private GameObject feedbackCanvas;
    private AudioSource successAudio;
    private AudioSource feedbackAudio;

    private void Start()
    {
        successCanvas = GameObject.Find("Success");
        feedbackCanvas = GameObject.Find("FeedBack");
        successAudio = successCanvas.GetComponent<AudioSource>();
        feedbackAudio = feedbackCanvas.GetComponent<AudioSource>();


        successCanvas.SetActive(false);
        feedbackCanvas.SetActive(false);
    }

    public void SttResultSave()
    {
        string sttResult = PlayerPrefs.GetString("sttResult");

        if (answer.Equals(sttResult))
        {
            StartCoroutine(waitSuccess(2.0f));
        }
        else
        {
            StartCoroutine(waitFeedback(2.0f));
        }
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

    IEnumerator waitFeedback(float seconds)
    {
        feedbackCanvas.SetActive(true);
        practiceAudio.Play();
        yield return new WaitForSeconds(seconds);
        feedbackAudio.Play();
        yield return new WaitForSeconds(6.2f);
        SceneManager.LoadScene(wrongSceneName);
    }
}
