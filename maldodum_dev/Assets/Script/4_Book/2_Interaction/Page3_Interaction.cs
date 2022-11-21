using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Page3_Interaction : MonoBehaviour
{
    public Sprite teacher_default;
    public Sprite teacher_math;
    public Sprite teacher_korean;

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

                //화면을 터치하면 과목이 바뀜
                if (click_object.name.Equals("3-2 기본"))
                {
                    if(count % 3 == 0)
                    {
                        click_object.GetComponent<Image>().sprite = teacher_math;
                    }
                    else if (count % 3 == 1)
                    {
                        click_object.GetComponent<Image>().sprite = teacher_korean;
                    }
                    else if (count % 3 == 2)
                    {
                        click_object.GetComponent<Image>().sprite = teacher_default;
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
