using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class Page5_Interaction : MonoBehaviour
{
    private VideoPlayer videoPlayer1;
    private VideoPlayer videoPlayer2;
    private bool active = true;
    private GameObject interaction_noti;

    void Start()
    {
        videoPlayer1 = GameObject.Find("Video Player(1)").GetComponent<VideoPlayer>();
        videoPlayer2 = GameObject.Find("Video Player(2)").GetComponent<VideoPlayer>();
        interaction_noti = GameObject.Find("_인터랙션");

        interaction_noti.SetActive(false);
    }

    void Update()
    {
        if (videoPlayer1.isPaused && active)
        {
            interaction_noti.SetActive(true);
            interaction_noti.GetComponent<AudioSource>().Play();
            active = false;
            Invoke("InteractionNotification_false", 0.8f);
        }

        if (Input.GetMouseButtonDown(0))
        {
            Vector2 pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            RaycastHit2D hit = Physics2D.Raycast(pos, Vector2.zero, 0f);

            if (hit.collider != null)
            {
                GameObject click_object = hit.transform.gameObject;

                //화면을 터치하면 병아리들이 따라와 산책함
                if (click_object.name.Equals("VideoScreen(1)"))
                {
                    videoPlayer2.Play();
                }
            }

        }

    }

    private void InteractionNotification_false()
    {
        interaction_noti.SetActive(false);
    }

}
