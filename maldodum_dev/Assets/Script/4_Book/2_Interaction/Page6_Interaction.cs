using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class Page6_Interaction : MonoBehaviour
{
    public Sprite onSwitchImg;
    public Sprite offSwitchImg;

    private bool on = true;
    private GameObject btnSwitch;
    private GameObject onCanvas;
    private GameObject offCanvas;
    private VideoPlayer onvideoPlayer;
    private VideoPlayer offvideoPlayer;
    private bool active = true;
    private AudioSource narration;

    void Start()
    {
        btnSwitch = GameObject.Find("6_3 스위치");

        onCanvas = GameObject.Find("Switch_on");
        offCanvas = GameObject.Find("Switch_off");
        onvideoPlayer = GameObject.Find("Video Player(1)").GetComponent<VideoPlayer>();
        offvideoPlayer = GameObject.Find("Video Player(2)").GetComponent<VideoPlayer>();

        narration = GameObject.Find("4_0_7 형광펜").GetComponent<AudioSource>();

        btnSwitch.SetActive(false);
        onCanvas.SetActive(true);
        offCanvas.SetActive(false);
    }

    void Update()
    {
        if (!narration.isPlaying && active)
        {
            btnSwitch.SetActive(true);
            active = false;
        }
    }

    public void SwitchTrans()
    {
        if (on)
        {
            on = false;
            btnSwitch.GetComponent<Image>().sprite = offSwitchImg;
            btnSwitch.GetComponent<AudioSource>().Play();

            onCanvas.SetActive(false);
            offCanvas.SetActive(true);
            onvideoPlayer.Pause();
            offvideoPlayer.Play();
        }
        else
        {
            on = true;
            btnSwitch.GetComponent<Image>().sprite = onSwitchImg;
            btnSwitch.GetComponent<AudioSource>().Play();

            onCanvas.SetActive(true);
            offCanvas.SetActive(false);
            onvideoPlayer.Play();
            offvideoPlayer.Pause();
        }
    }
}
