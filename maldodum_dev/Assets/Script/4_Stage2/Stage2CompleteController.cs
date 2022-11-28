using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stage2CompleteController : MonoBehaviour
{
    void Start()
    {
        if (PlayerPrefs.GetString("level").Equals("seed"))      //씨앗 단계는 seed, 새싹 단계는 spout
        {
            PlayerPrefs.SetString("Stage2_seed", "complete");   //단계 완료시 complete, 미완료시 incomplete
        }
        else
        {
            PlayerPrefs.SetString("Stage2_spout", "complete");  //단계 완료시 complete, 미완료시 incomplete
        }
    }
}
