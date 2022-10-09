using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Random_SceneChange : MonoBehaviour
{
    public string sceneName1;
    public string sceneName2;
    public string sceneName3;


    public void MoveRandomScene()
    {
        int randomNum = Random.Range(1, 4);
        switch (randomNum)
        {
            case 1:
                Debug.Log("1번으로 이동:" + randomNum);
                //SceneManager.LoadScene(sceneName1);
                break;
            case 2:
                Debug.Log("2번으로 이동:" + randomNum);
                //SceneManager.LoadScene(sceneName2);
                break;
            case 3:
                Debug.Log("3번으로 이동:" + randomNum);
                //SceneManager.LoadScene(sceneName3);
                break;
        }

        SceneManager.LoadScene(sceneName1);
    }
}
