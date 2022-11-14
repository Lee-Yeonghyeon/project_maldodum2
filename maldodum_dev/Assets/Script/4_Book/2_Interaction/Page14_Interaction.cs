using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class Page14_Interaction : MonoBehaviour
{
    private GameObject canvasDefault;
    private GameObject canvasMic;
    private GameObject canvasBall;
    private GameObject canvasGuitar;
    private GameObject canvasButton;

    private VideoPlayer playerDefault;
    private VideoPlayer playerMic;
    private VideoPlayer playerBall;
    private VideoPlayer playerGuitar;

    void Start()
    {
        canvasDefault = GameObject.Find("DefaultCanvas");
        canvasMic = GameObject.Find("MicCanvas");
        canvasBall = GameObject.Find("BallCanvas");
        canvasGuitar = GameObject.Find("GuitarCanvas");
        canvasButton = GameObject.Find("Button");

        playerDefault = GameObject.Find("DefaultPlayer").GetComponent<VideoPlayer>();
        playerMic = GameObject.Find("MicPlayer").GetComponent<VideoPlayer>();
        playerBall = GameObject.Find("BallPlayer").GetComponent<VideoPlayer>();
        playerGuitar = GameObject.Find("GuitarPlayer").GetComponent<VideoPlayer>();

        canvasDefault.SetActive(true);
        canvasMic.SetActive(false);
        canvasBall.SetActive(false);
        canvasGuitar.SetActive(false);
        canvasButton.SetActive(false);
    }

    void Update()
    {
        if (playerDefault.isPaused)
        {
            canvasButton.SetActive(true);
        }
    }

    public void SelectMic()
    {
        canvasDefault.SetActive(false);
        canvasMic.SetActive(true);
        canvasBall.SetActive(false);
        canvasGuitar.SetActive(false);

        playerMic.Play();
    }

    public void SelectBall()
    {
        canvasDefault.SetActive(false);
        canvasMic.SetActive(false);
        canvasBall.SetActive(true);
        canvasGuitar.SetActive(false);

        playerBall.Play();
    }

    public void SelectGuitar()
    {
        canvasDefault.SetActive(false);
        canvasMic.SetActive(false);
        canvasBall.SetActive(false);
        canvasGuitar.SetActive(true);

        playerGuitar.Play();
    }
}
