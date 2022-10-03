using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UI_SceneChange : MonoBehaviour
{

    public string sceneName;

    public void RestartScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void MoveParamScene()
    {
        SceneManager.LoadScene(sceneName);
    }

}
