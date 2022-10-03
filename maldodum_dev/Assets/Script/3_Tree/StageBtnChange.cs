using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StageBtnChange : MonoBehaviour
{

    public Button btn1;
    public Button btn2;
    public Button btn3;

    public Sprite img1;
    public Sprite img2;
    public Sprite img3;

    void Start()
    {
        string stage1 = PlayerPrefs.GetString("Stage1");        //단계 완료시 complete, 미완료시 incomplete
        string stage2 = PlayerPrefs.GetString("Stage2");
        string stage3 = PlayerPrefs.GetString("Stage3");

        string level = PlayerPrefs.GetString("level");          //씨앗 단계는 seed, 새싹 단계는 spout

        //todo. 단계마다 scrollView value 옮겨주기 -> 2단계에서는 2단계가 중앙에 오도록
        if (stage1.Equals("complete"))
        {
            this.btn1.GetComponent<Image>().sprite = this.img1;
        }
        if (stage2.Equals("complete"))
        {
            this.btn2.GetComponent<Image>().sprite = this.img2;
        }
        if (stage3.Equals("complete"))
        {
            this.btn3.GetComponent<Image>().sprite = this.img3;
        }

        Debug.Log(level);
    }

    void Update()
    {
        
    }
}