using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RecordSaveController : MonoBehaviour
{
    public string answer;
    public string correctSceneName;
    public string wrongSceneName;

    public void SttResultSave()
    {
        string sttResult = PlayerPrefs.GetString("sttResult");

        if (answer.Equals(sttResult))
        {
            SceneManager.LoadScene(correctSceneName);
        }
        else
        {
            SceneManager.LoadScene(wrongSceneName);
        }
    }
}
