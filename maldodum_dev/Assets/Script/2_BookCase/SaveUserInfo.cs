using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveUserInfo : MonoBehaviour
{
    
    void Start()
    {
        PlayerPrefs.SetString("Stage1", "incomplete");      //단계 완료시 complete, 미완료시 incomplete
        PlayerPrefs.SetString("Stage2", "incomplete");
        PlayerPrefs.SetString("Stage3", "incomplete");
    }

    
    void Update()
    {
        
    }
}
