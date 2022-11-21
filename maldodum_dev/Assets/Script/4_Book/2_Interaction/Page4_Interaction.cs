using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class Page4_Interaction : MonoBehaviour
{
    public Sprite rice2;
    public Sprite rice3;
    public Sprite rice4;
    public Sprite rice5;

    private VideoPlayer videoPlayer;
    private int count = 0;
    private bool active = true;
    private AudioSource narration;
    private GameObject interaction_noti;

    void Start()
    {
        videoPlayer = GameObject.Find("Video Player").GetComponent<VideoPlayer>();
        narration = GameObject.Find("4_0_7 형광펜").GetComponent<AudioSource>();
        interaction_noti = GameObject.Find("_인터랙션");

        interaction_noti.SetActive(false);
    }

    void Update()
    {
        if (!narration.isPlaying && active)
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

                //밥을 터치하면 밥 양이 줄어들고 병아리가 입을 움직임
                if (click_object.name.Equals("4_2 밥"))
                {
                    if (count == 0)
                    {
                        count++;
                        videoPlayer.Play();
                        click_object.GetComponent<Image>().sprite = rice2;
                    }
                    else if (count == 1)
                    {
                        count++;
                        videoPlayer.Play();
                        click_object.GetComponent<Image>().sprite = rice3;
                    }
                    else if (count == 2)
                    {
                        count++;
                        videoPlayer.Play();
                        click_object.GetComponent<Image>().sprite = rice4;
                    }
                    else if (count == 3)
                    {
                        count++;
                        videoPlayer.Play();
                        click_object.GetComponent<Image>().sprite = rice5;
                        click_object.GetComponent<AudioSource>().Play();
                    }
                }
            }
        }
    }

    private void InteractionNotification_false()
    {
        interaction_noti.SetActive(false);
    }

}
