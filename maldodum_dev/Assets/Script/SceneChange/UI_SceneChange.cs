using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UI_SceneChange : MonoBehaviour
{
    
    void Start()
    {
        
    }

    void Update()
    {
        
    }

    public void Move2Scene()
    {
        Debug.Log("move to 2");
        SceneManager.LoadScene("2_BookCase");
    }

    public void Move2_1Scene()
    {
        Debug.Log("move to 2.1");
        SceneManager.LoadScene("2.1_Tree");
    }
}
