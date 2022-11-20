using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CharacterController : MonoBehaviour
{
    private Image dodo;
    private Image titi;
    private Image character;
    private GameObject ment;

    public Sprite select_dodo;
    public Sprite select_titi;
    public Sprite unSelect_dodo;
    public Sprite unSelect_titi;
    public Sprite character_dodo;
    public Sprite character_titi;
    public bool isSelect1 = true;


    public void ChangeBtn()
    {
        if (isSelect1)
        {
            isSelect1 = false;
            dodo.sprite = unSelect_dodo;
            titi.sprite = select_titi;
            character.sprite = character_titi;
        }
        else
        {
            isSelect1 = true;
            dodo.sprite = select_dodo;
            titi.sprite = unSelect_titi;
            character.sprite = character_dodo;
        }

    }

    public void CompleteBtn()
    {
        if (isSelect1)
        {
            PlayerPrefs.SetString("char", "dodo");
        }
        else
        {
            PlayerPrefs.SetString("char", "titi");
        }
        ment.SetActive(true);
        Invoke("DeactiveMent", 3.0f);
    }

    private void DeactiveMent()
    {
        SceneManager.LoadScene("2_BookCase");
    }

    void Start()
    {
        dodo = GameObject.Find("9_2 캐릭터_1").GetComponent<Image>();
        titi = GameObject.Find("9_2 캐릭터_2").GetComponent<Image>();
        character = GameObject.Find("9_11 캐릭터_선택").GetComponent<Image>();
        ment = GameObject.Find("9_10 말풍선");

        ment.SetActive(false);
    }

    void Update()
    {
        
    }
}
