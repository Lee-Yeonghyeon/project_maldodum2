using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Tree_SceneChange : MonoBehaviour
{
    public string sceneName_seed;
    public string sceneName_spout;


    public void MoveParamScene()
    {
        if (PlayerPrefs.GetString("level").Equals("seed"))
        {
            SceneManager.LoadScene(sceneName_seed);
        } else
        {
            SceneManager.LoadScene(sceneName_spout);
        }
    }
}
