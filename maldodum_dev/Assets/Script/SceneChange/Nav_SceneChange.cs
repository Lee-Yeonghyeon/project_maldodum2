using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Nav_SceneChange : MonoBehaviour
{
    GameObject select_obj;

    void Start()
    {
        this.select_obj = GameObject.Find("0_2 메뉴선택");
    }

    void Update()
    {
        
    }

    public void MoveBookCase()
    {
        Debug.Log("move to bookcase");
        select_obj.transform.position = new Vector3(-5.95f, 4.1f, 0f);
        SceneManager.LoadScene("2_BookCase");
    }

    public void MoveCharacter()
    {
        Debug.Log("move to character");
        select_obj.transform.position = new Vector3(-5.95f, 2.85f, 0f);
        //SceneManager.LoadScene("");
    }

    public void MoveDictionary()
    {
        Debug.Log("move to dictionary");
        select_obj.transform.position = new Vector3(-5.95f, 1.6f, 0f);
        //SceneManager.LoadScene("");
    }

    public void MoveInformation()
    {
        Debug.Log("move to infomation");
        select_obj.transform.position = new Vector3(-5.95f, 0.35f, 0f);
        //SceneManager.LoadScene("");
    }

    public void MoveSetting()
    {
        Debug.Log("move to setting");
        //SceneManager.LoadScene("");
    }

    public void MoveExit()
    {
        Debug.Log("move to exit");
        Application.Quit();
    }


    public void MoveTree()
    {
        Debug.Log("move to tree");
        SceneManager.LoadScene("2.1_Tree");
    }
}
