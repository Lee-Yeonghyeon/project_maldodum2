using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class Page11_Interaction : MonoBehaviour
{

    private GameObject canvasNar;
    private GameObject canvasMove;
    private bool active = true;
    private VideoPlayer narVideoPlayer;
    private VideoPlayer moveVideoPlayer;

    void Start()
    {
        canvasNar = GameObject.Find("Narration");
        canvasMove = GameObject.Find("Move");
        narVideoPlayer = GameObject.Find("NarPlayer").GetComponent<VideoPlayer>();
        moveVideoPlayer = GameObject.Find("MovePlayer").GetComponent<VideoPlayer>();

        canvasNar.SetActive(true);
        canvasMove.SetActive(false);
        Debug.Log("33");
    }

    
    void Update()
    {
        if(narVideoPlayer.isPaused)
        {
            Debug.Log("11");
            canvasNar.SetActive(false);
            canvasMove.SetActive(true);
            active = false;

            moveVideoPlayer.Play();
        }

        if (Input.GetMouseButtonDown(0))
        {
            Vector2 pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            RaycastHit2D hit = Physics2D.Raycast(pos, Vector2.zero, 0f);

            if (hit.collider != null)
            {
                GameObject click_object = hit.transform.gameObject;

                //병아리를 터치하면 1초간 움직임을 멈춤
                if (click_object.name.Equals("Move"))
                {
                    Debug.Log("22");
                    moveVideoPlayer.Pause();
                    Invoke("MovePlay", 1.0f);
                }
            }
        }

    }

    private void MovePlay()
    {
        moveVideoPlayer.Play();
    }
}
