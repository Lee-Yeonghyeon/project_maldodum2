using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class Tutorial1Controller : MonoBehaviour
{
    public VideoPlayer video;
    public GameObject videoCanvas;
    public bool playOnAwake;
    bool active = true;

    private AudioSource question;

    void Start()
    {
        question = GameObject.Find("4_1_2_1 1p_질문").GetComponent<AudioSource>();

        if (!playOnAwake)
        {
            videoCanvas.SetActive(false);
            active = false;
        }
    }


    void Update()
    {
        if (video.isPaused && active)
        {
            videoCanvas.SetActive(false);
            active = false;
        }

        if (video.isPaused && playOnAwake)
        {
            question.Play();
            playOnAwake = false;
        }
    }

    public void PlayVideo()
    {
        videoCanvas.SetActive(true);
        video.Play();
        active = true;
    }
}
