using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Page2_Interaction : MonoBehaviour
{
    public Sprite chick1_sprite;
    public Sprite chick2_sprite;
    public Sprite chick3_sprite;
    public Sprite sun_sprite;

    private int count = 0;
    private Image sun_image;

    private void Start()
    {
        sun_image = GameObject.Find("2_8 해").GetComponent<Image>();
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

                //병아리를 터치하면 손을 들어 인사함
                if (click_object.name.Equals("2_2 병아리1"))
                {
                    click_object.GetComponent<Image>().sprite = chick1_sprite;
                    count++;
                }
                else if (click_object.name.Equals("2_4 병아리2"))
                {
                    click_object.GetComponent<Image>().sprite = chick2_sprite;
                    count++;
                }
                else if(click_object.name.Equals("2_6 병아리3")) {
                    click_object.GetComponent<Image>().sprite = chick3_sprite;
                    count++;
                }
            }
        }

        //병아리 3마리가 모두 인사를 하면 해가 미소를 지음
        if(count == 3)
        {
            sun_image.sprite = sun_sprite;
        }
    }
}
