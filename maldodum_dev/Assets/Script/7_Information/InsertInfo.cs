using System.Collections;
using System.Collections.Generic;
using System.IO;
using System;
using UnityEngine;


[System.Serializable]
public class Data
{
    public string word;
    public int accuracy;
    public string date;

    public void printData()
    {
        Debug.Log("Word: " + word);
        Debug.Log("Accuracy: " + accuracy);
        Debug.Log("date: " + date);
    }
}

[System.Serializable]
public class BodyData
{
    public List<Data> body;
}

public class InsertInfo : MonoBehaviour
{

    public void InsertData()
    {
        //data 생성
        Data data1 = new Data();
        data1.word = "병아리";
        data1.accuracy = 100;
        data1.date = DateTime.Now.ToString("dd");

        //data 추가
        string info = File.ReadAllText(Application.dataPath + "/InfoData.json");
        BodyData body = JsonUtility.FromJson<BodyData>(info);
        body.body.Add(data1);

        //data 저장
        File.WriteAllText(Application.dataPath + "/InfoData.json", JsonUtility.ToJson(body, true));
    }

    void Start()
    {

    }

    void Update()
    {
        
    }
}
