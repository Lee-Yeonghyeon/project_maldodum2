using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Page3_0_1Controller : MonoBehaviour
{
    AudioSource soundSource;
    public Sprite btn_active;
    bool active = false;


    void Start()
    {
        soundSource = GetComponent<AudioSource>();
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
