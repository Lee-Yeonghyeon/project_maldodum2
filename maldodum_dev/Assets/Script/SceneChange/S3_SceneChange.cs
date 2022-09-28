using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class S3_SceneChange : MonoBehaviour
{
    void Start()
    {
        
    }

    void Update()
    {
        
    }

    public void RestartScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void Move3_0_1Scene()
    {
        SceneManager.LoadScene("3.0.1_page0.1");
    }

    public void Move3_1_1Scene()
    {
        SceneManager.LoadScene("3.1.1_page1.1");
    }

    public void Move3_1_2Scene()
    {
        SceneManager.LoadScene("3.1.2_page1.2");
    }

    public void Move3_1_3Scene()
    {
        SceneManager.LoadScene("3.1.3_page1.3");
    }

    public void Move3_2_1Scene()
    {
        SceneManager.LoadScene("3.2.1_page2.1");
    }
}
