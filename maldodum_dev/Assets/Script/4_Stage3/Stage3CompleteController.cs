using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stage3CompleteController : MonoBehaviour
{
    void Start()
    {
        PlayerPrefs.SetString("Stage3", "complete");
    }
}
