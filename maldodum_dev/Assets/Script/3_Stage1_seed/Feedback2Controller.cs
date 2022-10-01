using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Feedback2Controller : MonoBehaviour
{
    AudioSource soundSource;
    public GameObject feedbackCanvas;
    private bool active = false;

    void Start()
    {
        soundSource = this.gameObject.GetComponent<AudioSource>();
        feedbackCanvas = GameObject.Find("Feedback");
        Invoke("AudioStart", 0.5f);
    }

    void Update()
    {
        if (!soundSource.isPlaying && active)
        {
            feedbackCanvas.SetActive(false);
        }
    }

    private void AudioStart()
    {
        this.soundSource.Play();
        active = true;
    }


    //public void CanvasInvisible()
    //{
    //    SceneManager.LoadScene(sceneName);
    //}
}
