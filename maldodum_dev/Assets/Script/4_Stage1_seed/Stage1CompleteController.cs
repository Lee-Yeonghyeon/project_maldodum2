using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stage1CompleteController : MonoBehaviour
{
    void Start()
    {
        PlayerPrefs.SetString("Stage1", "complete");
    }
}
