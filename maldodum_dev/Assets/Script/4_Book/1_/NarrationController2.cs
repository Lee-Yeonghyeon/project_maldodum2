using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NarrationController2 : MonoBehaviour
{

    AudioSource soundSource;
    public Sprite btn_active;
    bool active = false;

    public float nar_sec1;
    public float pos_x1;
    public float pos_y1;
    public float scale_x1;

    public float nar_sec2;
    public float pos_x2;
    public float pos_y2;
    public float scale_x2;

    void ChangePosition1()
    {
        this.transform.position = new Vector3(pos_x1, pos_y1, 0);
        this.transform.localScale = new Vector3(scale_x1, 0.6f, 0.6f);
    }

    void ChangePosition2()
    {
        this.transform.position = new Vector3(pos_x2, pos_y2, 0);
        this.transform.localScale = new Vector3(scale_x2, 0.6f, 0.6f);
    }

    void Start()
    {
        soundSource = GetComponent<AudioSource>();
        Invoke("ChangePosition1", nar_sec1);
        Invoke("ChangePosition2", nar_sec2);
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
