using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class TutorialController : MonoBehaviour
{
    public VideoPlayer video;
    public GameObject videoCanvas;
    public bool playOnAwake;
    bool active = true;

    void Start()
    {
        if (!playOnAwake)
        {
            videoCanvas.SetActive(false);
            active = false;
        }
    }


    void Update()
    {
        if(video.isPaused && active)
        {
            videoCanvas.SetActive(false);
            active = false;
        }
    }

    public void PlayVideo()
    {
        videoCanvas.SetActive(true);
        video.Play();
        active = true;
    }
}