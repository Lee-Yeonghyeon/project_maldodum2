using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NarrationController : MonoBehaviour
{

    AudioSource soundSource;
    public Sprite btn_active;
    bool active = false;

    public float nar_sec;
    public float pos_x;
    public float pos_y;
    public float scale_x;

    void ChangePosition()
    {
        this.transform.position = new Vector3(pos_x, pos_y, 0);
        this.transform.localScale = new Vector3(scale_x, 0.6f, 0.6f);
    }

    void Start()
    {
        soundSource = GetComponent<AudioSource>();
        Invoke("ChangePosition", nar_sec);
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
