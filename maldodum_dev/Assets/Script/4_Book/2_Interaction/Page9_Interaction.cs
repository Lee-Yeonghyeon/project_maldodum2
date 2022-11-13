using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Page9_Interaction : MonoBehaviour
{

    public Sprite small;

    void Update()
    {
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
}
