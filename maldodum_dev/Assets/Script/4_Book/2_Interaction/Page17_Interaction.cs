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

    void Start()
    {
        
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

                //화면을 터치하면 점점 황금알로 변함
                if (click_object.name.Equals("17_1 황금알"))
                {
                    if(count == 0)
                    {
                        click_object.GetComponent<Image>().sprite = egg2;
                        count++;
                    }
                    else if (count == 1)
                    {
                        click_object.GetComponent<Image>().sprite = egg3;
                        count++;
                    }
                    else if (count == 2)
                    {
                        click_object.GetComponent<Image>().sprite = egg4;
                        count++;
                    }
                    else if (count == 3)
                    {
                        click_object.GetComponent<Image>().sprite = egg5;
                        count++;
                    }

                }
            }
        }
    }
}
