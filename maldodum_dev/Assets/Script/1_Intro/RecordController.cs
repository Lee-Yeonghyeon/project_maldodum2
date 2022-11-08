using System.Collections;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using System;

[RequireComponent(typeof(AudioSource))]
public class RecordController : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    private bool isMicConnected = false;
    private int minFreq;
    private int maxFreq;

    private GameObject canvasListen;
    private GameObject canvasSpeek;
    private GameObject canvasCheck;
    private AudioSource audioSource;
    private Image btnRecord;
    private VideoPlayer speekerPlayer;

    public Sprite recordActive;
    public Sprite recordDeactive;

    void Start()
    {
        canvasListen = GameObject.Find("Listen");
        canvasSpeek = GameObject.Find("Speek");
        canvasCheck = GameObject.Find("Check");

        if (Microphone.devices.Length <= 0)
        {
            Debug.LogWarning("마이크 없음");
        } else
        {
            isMicConnected = true;
            Microphone.GetDeviceCaps(null, out minFreq, out maxFreq);

            if(minFreq == 0 && maxFreq == 0)
            {
                maxFreq = 44100;
            }
        }

        audioSource = GameObject.Find("13_3_2 다시듣기").GetComponent<AudioSource>();
        btnRecord = GameObject.Find("13_2_8 녹음").GetComponent<Image>();
        speekerPlayer = GameObject.Find("SpeekerPlayer").GetComponent<VideoPlayer>();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (isMicConnected)
        {
            if (!Microphone.IsRecording(null))
            {
                speekerPlayer.Play();
                btnRecord.sprite = recordActive;
                audioSource.clip = Microphone.Start(null, true, 3, maxFreq);
            }
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (isMicConnected)
        {
            btnRecord.sprite = recordDeactive;
            Microphone.End(null);
            ViewCheck();
            
        }
    }

    private void ViewCheck()
    {
        //canvasListen.SetActive(false);
        //canvasSpeek.SetActive(false);
        //canvasCheck.SetActive(true);
        canvasListen.GetComponent<Canvas>().sortingOrder = -2;
        canvasSpeek.GetComponent<Canvas>().sortingOrder = -2;
        canvasCheck.GetComponent<Canvas>().sortingOrder = 0;
    }
}
