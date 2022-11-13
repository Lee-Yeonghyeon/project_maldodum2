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
                    count++;
                }
            }
        }
    }


}
