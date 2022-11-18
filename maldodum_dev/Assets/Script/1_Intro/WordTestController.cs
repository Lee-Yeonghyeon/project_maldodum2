using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class WordTestController : MonoBehaviour
{
    public float wordAudioTime;

    private GameObject canvasListen;
    private GameObject canvasSpeek;
    private GameObject canvasCheck;

    private Image btnPlay;
    private VideoPlayer listenerPlayer;
    private AudioSource audioReplay;

    private int count = 0;


    void Start()
    {
        canvasListen = GameObject.Find("Listen");
        canvasSpeek = GameObject.Find("Speek");
        canvasCheck = GameObject.Find("Check");

        btnPlay = GameObject.Find("13_2_7 재생").GetComponent<Image>();
        listenerPlayer = GameObject.Find("ListenerPlayer").GetComponent<VideoPlayer>();
        audioReplay = GameObject.Find("13_3_2 다시듣기").GetComponent<AudioSource>();

        ViewListen();
    }

    void Update()
    {
        
    }

    //
    // 무의미단어 듣기
    //
    private void ViewListen()
    {
        canvasListen.SetActive(true);
        canvasSpeek.SetActive(false);
        canvasCheck.SetActive(false);
    }

    public void PlayAudio()
    {
        btnPlay.GetComponent<AudioSource>().Play();
        listenerPlayer.Play();
        Invoke("ViewSpeek", wordAudioTime);
    }

    //
    // 무의미단어 발음&녹음하기
    //
    private void ViewSpeek()
    {
        canvasListen.SetActive(true);
        canvasSpeek.SetActive(true);
        canvasCheck.SetActive(true);
        canvasListen.GetComponent<Canvas>().sortingOrder = -2;
        canvasSpeek.GetComponent<Canvas>().sortingOrder = 0;
        canvasCheck.GetComponent<Canvas>().sortingOrder = -2;
    }

    //RecordController.cs 구현

    //
    // 무의미단어 채점하기
    //
    public void ReplayCheck()
    {
        audioReplay.Play();
    }

    public void SelectCheck()
    {
        Image wordBtn = GameObject.Find(EventSystem.current.currentSelectedGameObject.name).GetComponent<Image>();
        
        if(wordBtn.transform.position.z == 90)  // 단어 선택 (FFFFFF -> F1A5B6)
        {
            wordBtn.color = new Color(0.945f, 0.647f, 0.647f, 1.0f);
            wordBtn.transform.Translate(new Vector3(0f, 0f, 1f));
            count++;
            Debug.Log("count++: " + count);
        }
        else    // 단어 선택 취소 (F1A5B6 -> FFFFFF)
        {
            wordBtn.color = new Color(1.0f, 1.0f, 1.0f, 1.0f);
            wordBtn.transform.Translate(new Vector3(0f, 0f, -1f));
            count--;
            Debug.Log("count--: " + count);
        }
    }

    public void completeCheck()
    {
        int wordTextTotalCount = PlayerPrefs.GetInt("wordCount");
        PlayerPrefs.SetInt("wordCount", wordTextTotalCount + count);
        Debug.Log("wordCount: " + (wordTextTotalCount + count));
    }

    public void moveSceneCheck()
    {
        int prefMonth = PlayerPrefs.GetInt("age");
        if (PlayerPrefs.GetInt("age") < 48)
        {
            SceneManager.LoadScene("1.11_introTutorial");
        } else
        {
            SceneManager.LoadScene("1.10_wordTest9");
        }
    }

}
