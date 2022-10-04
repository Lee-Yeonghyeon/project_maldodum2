using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stage2CompleteController : MonoBehaviour
{
    void Start()
    {
        PlayerPrefs.SetString("Stage2", "complete");
    }
}
