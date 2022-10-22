using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.UI;

public class PracticeVideoController : MonoBehaviour
{
    public VideoPlayer video;
    public GameObject videoCanvas;
    public Image btn;
    public Sprite play_btn;
    public Sprite pause_btn;
    bool state = true;

    void Start()
    {
        video.loopPointReached += CheckOver;
    }

    //사용자가 영상을 재생/일시정지했을 경우
    public void TogglePlayVideo()
    {
        if (state)                      //true: 재생하기, false: 정지하기
        {
            video.Play();
            btn.sprite = pause_btn;
            state = false;
        } else
        {
            video.Pause();
            btn.sprite = play_btn;
            state = true;
        }
    }

    //영상이 끝났을 경우
    void CheckOver(UnityEngine.Video.VideoPlayer vp)
    {
        btn.sprite = play_btn;
        state = true;
    }
}
