using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Page3_1_1Controller : MonoBehaviour
{

    AudioSource soundSource;
    public Sprite btn_active;
    bool active = false;

    void ChangePosition()
    {
        this.transform.position = new Vector3(-4.38f, -3.4f, 0);
        this.transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
    }

    void Start()
    {
        soundSource = GetComponent<AudioSource>();
        Invoke("ChangePosition", 1.0f);
    }

    void Update()
    {
        if (!soundSource.isPlaying && !active)
        {
            GameObject.FindGameObjectWithTag("next").GetComponent<Image>().sprite = this.btn_active;
            GameObject.FindGameObjectWithTag("next").GetComponent<Button>().interactable = true;
            active = true;
        }
    }
}
