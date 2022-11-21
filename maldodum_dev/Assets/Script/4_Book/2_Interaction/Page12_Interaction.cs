using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class Page12_Interaction : MonoBehaviour
{
    public float positionX;
    public float positionY;

    private bool triggerActive = false;

    private bool active = true;
    private AudioSource narration;
    private VideoPlayer video;
    private Image tissue;
    private Image tissueBox;
    
    void Start()
    {
        narration = GameObject.Find("4_0_7 형광펜").GetComponent<AudioSource>();
        video = GameObject.Find("VideoPlayer").GetComponent<VideoPlayer>();
        tissue = GameObject.Find("12_4 휴지").GetComponent<Image>();
        tissueBox = GameObject.Find("12_3 휴지곽").GetComponent<Image>();

        tissue.color = Color.clear;
        tissueBox.color = Color.clear;
    }

    
    void Update()
    {
        if (!narration.isPlaying && active)
        {
            tissue.color = Color.white;
            tissueBox.color = Color.white;
            video.Play();
            active = false;
        }

    }


    private void OnMouseDrag()
    {
        Vector3 mousePosition = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10);
        this.transform.position = Camera.main.ScreenToWorldPoint(mousePosition);
    }

    private void OnMouseUp()
    {
        if (triggerActive)
        {
            video.Pause();
            Invoke("PlayVideo", 2.0f);
        }
        this.transform.position = new Vector3(positionX, positionY, 0.0f);
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        triggerActive = true;
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        triggerActive = false;
    }

    private void PlayVideo()
    {
        video.Play();
    }
}
