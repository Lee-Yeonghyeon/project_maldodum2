using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Page9_Interaction : MonoBehaviour
{

    public Sprite small;

    private bool active = true;
    private AudioSource narration;
    private GameObject interaction_noti;

    void Start()
    {
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

                //병아리를 터치하면 숨어있던 키 작은 병아리가 나옴
                if (click_object.name.Equals("9_2 병아리"))
                {
                    click_object.GetComponent<Image>().sprite = small;
                }
            }
        }
    }

    private void InteractionNotification_false()
    {
        interaction_noti.SetActive(false);
    }
}
