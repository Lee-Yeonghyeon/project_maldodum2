using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FeedbackController : MonoBehaviour
{
    AudioSource soundSource;
    public string sceneName;
    private bool active = false;

    void Start()
    {
        soundSource = this.gameObject.GetComponent<AudioSource>();
        Invoke("AudioStart", 0.5f);
    }

    void Update()
    {
        if (!soundSource.isPlaying && active)
        {
            Invoke("MoveParamScene", 0.5f);
        }
    }

    private void AudioStart()
    {
        this.soundSource.Play();
        active = true;
    }

    public void MoveParamScene()
    {
        SceneManager.LoadScene(sceneName);
    }
}
