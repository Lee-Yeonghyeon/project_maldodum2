using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class Page5_Interaction : MonoBehaviour
{
    private VideoPlayer videoPlayer2;

    void Start()
    {
        videoPlayer2 = GameObject.Find("Video Player(2)").GetComponent<VideoPlayer>();
    }

    void Update()
    {
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


}
