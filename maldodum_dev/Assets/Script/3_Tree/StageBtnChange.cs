using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StageBtnChange : MonoBehaviour
{
    public Scrollbar scrollbar;

    public Button btn1;
    public Button btn2;
    public Button btn3;

    public Sprite img1_open;
    public Sprite img2_open;
    public Sprite img3_open;
    public Sprite img1_clear;
    public Sprite img2_clear;
    public Sprite img3_clear;

    void Start()
    {
        string stage1 = PlayerPrefs.GetString("Stage1");        //단계 완료시 complete, 미완료시 incomplete
        string stage2 = PlayerPrefs.GetString("Stage2");
        string stage3 = PlayerPrefs.GetString("Stage3");

        string level = PlayerPrefs.GetString("level");          //씨앗 단계는 seed, 새싹 단계는 spout

        if (stage1.Equals("complete"))
        {
            scrollbar.value = 0.5f;
            this.btn1.GetComponent<Image>().sprite = this.img1_clear;
            this.btn2.interactable = true;
            this.btn2.GetComponent<Image>().sprite = this.img2_open;
        }
        if (stage2.Equals("complete"))
        {
            scrollbar.value = 1.0f;
            this.btn2.GetComponent<Image>().sprite = this.img2_clear;
            this.btn3.interactable = true;
            this.btn3.GetComponent<Image>().sprite = this.img3_open;
        }
        if (stage3.Equals("complete"))
        {
            scrollbar.value = 1.0f;
            this.btn3.GetComponent<Image>().sprite = this.img3_clear;
        }
    }

    void Update()
    {
        
    }
}
