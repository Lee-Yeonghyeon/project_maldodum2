using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CountReset : MonoBehaviour
{
    void Start()
    {
        PlayerPrefs.SetInt("wordCount", 0);
    }

    void Update()
    {
        
    }
}
