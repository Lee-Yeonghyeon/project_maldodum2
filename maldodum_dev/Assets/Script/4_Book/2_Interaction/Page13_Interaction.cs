using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Page13_Interaction : MonoBehaviour
{
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
    }

    private void InteractionNotification_false()
    {
        interaction_noti.SetActive(false);
    }


    private void OnMouseDrag()
    {
        Vector3 mousePosition = new Vector3(Input.mousePosition.x, 940, 10);
        this.transform.position = Camera.main.ScreenToWorldPoint(mousePosition);

        if(mousePosition.x > 800)
        {
            this.GetComponent<AudioSource>().Play();
        }
    }
}
