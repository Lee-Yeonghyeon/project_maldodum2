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
    private Image btnSwitch;
    private GameObject onCanvas;
    private GameObject offCanvas;
    private VideoPlayer onvideoPlayer;
    private VideoPlayer offvideoPlayer;

    void Start()
    {
        btnSwitch = GameObject.Find("6_3 스위치").GetComponent<Image>();

        onCanvas = GameObject.Find("Switch_on");
        offCanvas = GameObject.Find("Switch_off");
        onvideoPlayer = GameObject.Find("Video Player(1)").GetComponent<VideoPlayer>();
        offvideoPlayer = GameObject.Find("Video Player(2)").GetComponent<VideoPlayer>();

        onCanvas.SetActive(true);
        offCanvas.SetActive(false);
    }

    void Update()
    {
        
    }

    public void SwitchTrans()
    {
        if (on)
        {
            on = false;
            btnSwitch.sprite = offSwitchImg;

            onCanvas.SetActive(false);
            offCanvas.SetActive(true);
            onvideoPlayer.Pause();
            offvideoPlayer.Play();
        }
        else
        {
            on = true;
            btnSwitch.sprite = onSwitchImg;

            onCanvas.SetActive(true);
            offCanvas.SetActive(false);
            onvideoPlayer.Play();
            offvideoPlayer.Pause();
        }
    }
}
