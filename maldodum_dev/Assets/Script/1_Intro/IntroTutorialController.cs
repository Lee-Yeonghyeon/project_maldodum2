using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.SceneManagement;

public class IntroTutorialController : MonoBehaviour
{
    public VideoPlayer tutorialPlayer;

    private bool active = true;

    void Start()
    {
        
    }

    void Update()
    {
        if (tutorialPlayer.isPaused && active)
        {
            SceneManager.LoadScene("2_BookCase");
            active = false;
        }
    }
}
