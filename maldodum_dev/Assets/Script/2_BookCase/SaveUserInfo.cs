using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveUserInfo : MonoBehaviour
{
    
    void Start()
    {
    }

    
    void Update()
    {
        
    }

    public void stageReset()
    {
        PlayerPrefs.SetString("Stage1_seed", "incomplete");      //단계 완료시 complete, 미완료시 incomplete
        PlayerPrefs.SetString("Stage2_seed", "incomplete");
        PlayerPrefs.SetString("Stage3_seed", "incomplete");

        PlayerPrefs.SetString("Stage1_spout", "incomplete");
        PlayerPrefs.SetString("Stage2_spout", "incomplete");
        PlayerPrefs.SetString("Stage3_spout", "incomplete");
    }

    public void stageComplete()
    {
        PlayerPrefs.SetString("Stage1_seed", "complete");
        PlayerPrefs.SetString("Stage2_seed", "complete");
        PlayerPrefs.SetString("Stage3_seed", "complete");

        PlayerPrefs.SetString("Stage1_spout", "complete");
        PlayerPrefs.SetString("Stage2_spout", "complete");
        PlayerPrefs.SetString("Stage3_spout", "complete");
    }
}
