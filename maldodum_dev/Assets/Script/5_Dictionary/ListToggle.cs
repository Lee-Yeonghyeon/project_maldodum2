using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ListToggle : MonoBehaviour
{
    public Image list1;
    public Image list2;
    public Sprite select_list1;
    public Sprite select_list2;
    public Sprite unSelect_list1;
    public Sprite unSelect_list2;
    public bool isSelect1 = true;

    GameObject cardChicken;
    GameObject cardCook;

    public void Changelist()
    {
        if (isSelect1)
        {
            isSelect1 = false;
            PlayerPrefs.SetString("dictionary", "cookcook");
            list1.sprite = unSelect_list1;
            list2.sprite = select_list2;
            cardChicken.SetActive(false);
            cardCook.SetActive(true);
        }
        else
        {
            isSelect1 = true;
            PlayerPrefs.SetString("dictionary", "chicken");
            list1.sprite = select_list1;
            list2.sprite = unSelect_list2;
            cardChicken.SetActive(true);
            cardCook.SetActive(false);
        }

    }

    void Start()
    {
        this.cardChicken = GameObject.Find("CardList_NiceChicken");
        this.cardCook = GameObject.Find("CardList_CookCookABC");

        string dictionaryBook = PlayerPrefs.GetString("dictionary");

        if (dictionaryBook.Equals("chicken") || dictionaryBook.Equals(""))
        {
            isSelect1 = true;
            PlayerPrefs.SetString("dictionary", "chicken");
            list1.sprite = select_list1;
            list2.sprite = unSelect_list2;
            cardChicken.SetActive(true);
            cardCook.SetActive(false);
        } else
        {
            isSelect1 = false;
            PlayerPrefs.SetString("dictionary", "cookcook");
            list1.sprite = unSelect_list1;
            list2.sprite = select_list2;
            cardChicken.SetActive(false);
            cardCook.SetActive(true);
        }
    }

    void Update()
    {
        
    }
}
