using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonToggle : MonoBehaviour
{
    public Image btn1;
    public Image btn2;
    public Sprite select_btn1;
    public Sprite select_btn2;
    public Sprite unSelect_btn1;
    public Sprite unSelect_btn2;
    public bool isSelect1 = true;

    public void ChangeBtn()
    {
        if (isSelect1)
        {
            isSelect1 = false;
            PlayerPrefs.SetString("level", "spout");
            btn1.sprite = unSelect_btn1;
            btn2.sprite = select_btn2;
        }
        else
        {
            isSelect1 = true;
            PlayerPrefs.SetString("level", "seed");
            btn1.sprite = select_btn1;
            btn2.sprite = unSelect_btn2;

        }

    }

    void Start()
    {
        PlayerPrefs.SetString("level", "seed");
    }

    void Update()
    {
        
    }
}
