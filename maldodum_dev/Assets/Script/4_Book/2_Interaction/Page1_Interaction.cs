using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Page1_Interaction : MonoBehaviour
{
    private GameObject interaction;
    private GameObject interaction_noti;
    private GameObject findMark1;
    private GameObject findMark2;

    void Start()
    {
        interaction = GameObject.Find("Interaction");
        interaction_noti = GameObject.Find("_인터랙션");
        findMark1 = GameObject.Find("1_7 동그라미1");
        findMark2 = GameObject.Find("1_7 동그라미2");

        interaction.SetActive(false);
        findMark1.SetActive(false);
        findMark2.SetActive(false);

        Invoke("InteractionView", 4.0f);
    }

    void Update()
    {
        //병아리를 클릭했을 때
        if (Input.GetMouseButtonDown(0))
        {
            Vector2 pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            RaycastHit2D hit = Physics2D.Raycast(pos, Vector2.zero, 0f);

            if(hit.collider != null)
            {
                GameObject click_object = hit.transform.gameObject;
                Debug.Log(click_object.name);

                //병아리 위치 이동 및 동그라미 보여짐
                if(click_object.name.Equals("1_3 병아리2"))
                {
                    click_object.transform.position = new Vector3(-4.1f, -1.37f, 0);
                    click_object.GetComponent<AudioSource>().Play();
                    findMark1.SetActive(true);
                } else if(click_object.name.Equals("1_4 병아리3"))
                {
                    click_object.transform.position = new Vector3(4.1f, -2.55f, 0);
                    click_object.GetComponent<AudioSource>().Play();
                    findMark2.SetActive(true);
                }
            }
        }
    }

    private void InteractionView()
    {
        interaction.SetActive(true);
        interaction_noti.GetComponent<AudioSource>().Play();
        Invoke("InteractionNotification_false", 0.8f);
    }

    private void InteractionNotification_false()
    {
        interaction_noti.SetActive(false);
    }
}
