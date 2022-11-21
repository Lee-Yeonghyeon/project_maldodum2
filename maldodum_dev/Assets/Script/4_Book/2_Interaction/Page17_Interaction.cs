using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Page17_Interaction : MonoBehaviour
{
    public Sprite egg2;
    public Sprite egg3;
    public Sprite egg4;
    public Sprite egg5;

    private int count = 0;
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

                //화면을 터치하면 점점 황금알로 변함
                if (click_object.name.Equals("17_1 황금알"))
                {
                    if(count == 0)
                    {
                        click_object.GetComponent<Image>().sprite = egg2;
                    }
                    else if (count == 1)
                    {
                        click_object.GetComponent<Image>().sprite = egg3;
                    }
                    else if (count == 2)
                    {
                        click_object.GetComponent<Image>().sprite = egg4;
                    }
                    else if (count == 3)
                    {
                        click_object.GetComponent<Image>().sprite = egg5;
                        click_object.GetComponent<AudioSource>().clip = Resources.Load("Interaction/17_2 효과음_황금") as AudioClip;
                        click_object.GetComponent<AudioSource>().volume = 0.5f;
                    }
                    click_object.GetComponent<AudioSource>().Play();
                    count++;
                }
            }
        }
    }

    private void InteractionNotification_false()
    {
        interaction_noti.SetActive(false);
    }
}
