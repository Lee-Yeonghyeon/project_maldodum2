using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InfoController : MonoBehaviour
{
    //profile
    private Text name;
    private Text age;
    private Image levelImg;
    public Sprite levelSeed;
    public Sprite levelSpout;

    //accuracy
    private Text accuracyTotal;
    private Image weekly;
    private Text weeklyText;
    private Image daily;
    private Text dailyText;

    //book
    private Text bookTotal;
    private Text dateLast;
    private Image progressLast;
    private Text dateRecently;
    private Image progressRecently;

    //word
    private Text wordTotal;
    private Image barMon;
    private Text numMon;
    private Image barTue;
    private Text numTue;
    private Image barWed;
    private Text numWed;
    private Image barThu;
    private Text numThu;
    private Image barFri;
    private Text numFri;
    private Image barSat;
    private Text numSat;
    private Image barSun;
    private Text numSun;



    void Start()
    {
        //profile
        name = GameObject.Find("name").GetComponent<Text>();
        age = GameObject.Find("age").GetComponent<Text>();
        levelImg = GameObject.Find("11_3 단계").GetComponent<Image>();

        //accuracy
        accuracyTotal = GameObject.Find("accuracy_total").GetComponent<Text>();
        weekly = GameObject.Find("weekly").GetComponent<Image>();
        weeklyText = GameObject.Find("weekly_text").GetComponent<Text>();
        daily = GameObject.Find("daily").GetComponent<Image>();
        dailyText = GameObject.Find("daily_text").GetComponent<Text>();

        //book
        bookTotal = GameObject.Find("book_total").GetComponent<Text>();
        dateLast = GameObject.Find("date_last").GetComponent<Text>();
        progressLast = GameObject.Find("11_9 프로그레스_last").GetComponent<Image>();
        dateRecently = GameObject.Find("date_recently").GetComponent<Text>();
        progressRecently = GameObject.Find("11_9 프로그레스_recently").GetComponent<Image>();

        //word
        wordTotal = GameObject.Find("word_total").GetComponent<Text>();
        barMon = GameObject.Find("bar_mon").GetComponent<Image>();
        numMon = GameObject.Find("num_mon").GetComponent<Text>();
        barTue = GameObject.Find("bar_tue").GetComponent<Image>();
        numTue = GameObject.Find("num_tue").GetComponent<Text>();
        barWed = GameObject.Find("bar_wed").GetComponent<Image>();
        numWed = GameObject.Find("num_wed").GetComponent<Text>();
        barThu = GameObject.Find("bar_thu").GetComponent<Image>();
        numThu = GameObject.Find("num_thu").GetComponent<Text>();
        barFri = GameObject.Find("bar_fri").GetComponent<Image>();
        numFri = GameObject.Find("num_fri").GetComponent<Text>();
        barSat = GameObject.Find("bar_sat").GetComponent<Image>();
        numSat = GameObject.Find("num_sat").GetComponent<Text>();
        barSun = GameObject.Find("bar_sun").GetComponent<Image>();
        numSun = GameObject.Find("num_sun").GetComponent<Text>();


        //profile
        name.text = "박돋움";
        age.text = "만 3세 (38개월)";
        string level = "spout";
        if (level.Equals("seed"))
        {
            levelImg.sprite = levelSeed;
        } else
        {
            levelImg.sprite = levelSpout;
        }

        //accuracy
        accuracyTotal.text = "88";
        weekly.fillAmount = 0.75f;
        weeklyText.text = "75%";
        daily.fillAmount = 0.40f;
        dailyText.text = "40%";

        //book
        bookTotal.text = "1";
        dateLast.text = "2022/10/29";
        progressLast.fillAmount = 0.99f;
        dateRecently.text = "2022/10/30";
        progressRecently.fillAmount = 0.20f;

        //word
        Image[] bars = { barMon, barTue, barWed, barThu, barFri, barSat, barSun };
        Text[] nums = { numMon, numTue, numWed, numThu, numFri, numSat, numSun };
        int[] words = new int[7];
        int max = 0;
        int maxIndex = 0;
        words[0] = 5;
        words[1] = 10;
        words[2] = 30;
        words[3] = 10;
        words[4] = 0;
        words[5] = 7;
        words[6] = 0;

        for(int i = 0; i < words.Length; i++)
        {
            if(max < words[i])
            {
                max = words[i];
                maxIndex = i;
            }
        }

        wordTotal.text = "88";
        for(int i = 0; i < words.Length; i++)
        {
            bars[i].fillAmount = words[i] / (float)max;

            if(maxIndex == i)
            {
                nums[i].text = words[i].ToString();
            } else
            {
                nums[i].text = "";
            }
        }

    }

    void Update()
    {
        
    }
}
