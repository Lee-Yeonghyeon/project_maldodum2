using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DropdownController : MonoBehaviour
{
    public InputField nameInput;
    public Dropdown yearDropdown;
    public Dropdown monthDropdown;
    public Dropdown dayDropdown;

    private string name = "말돋움";
    private int year = 2016;
    private int month = 1;
    private int day = 1;


    private void Start()
    {
        PlayerPrefs.SetString("name", name);
        PlayerPrefs.SetInt("year", year);
        PlayerPrefs.SetInt("month", month);
        PlayerPrefs.SetInt("day", day);
    }

    public void selectYear()
    {
        year = yearDropdown.value;
        switch (year)
        {
            case (0): PlayerPrefs.SetInt("year", 2016); break;
            case (1): PlayerPrefs.SetInt("year", 2017); break;
            case (2): PlayerPrefs.SetInt("year", 2018); break;
            case (3): PlayerPrefs.SetInt("year", 2019); break;
            case (4): PlayerPrefs.SetInt("year", 2020); break;
            case (5): PlayerPrefs.SetInt("year", 2021); break;
        }
    }

    public void selectMonth()
    {
        month = monthDropdown.value;
        switch (month)
        {
            case (0): PlayerPrefs.SetInt("month", 1); break;
            case (1): PlayerPrefs.SetInt("month", 2); break;
            case (2): PlayerPrefs.SetInt("month", 3); break;
            case (3): PlayerPrefs.SetInt("month", 4); break;
            case (4): PlayerPrefs.SetInt("month", 5); break;
            case (5): PlayerPrefs.SetInt("month", 6); break;
            case (6): PlayerPrefs.SetInt("month", 7); break;
            case (7): PlayerPrefs.SetInt("month", 8); break;
            case (8): PlayerPrefs.SetInt("month", 9); break;
            case (9): PlayerPrefs.SetInt("month", 10); break;
            case (10): PlayerPrefs.SetInt("month", 11); break;
            case (11): PlayerPrefs.SetInt("month", 12); break;

        }
    }

    public void selectDay()
    {
        day = dayDropdown.value;
        switch (day)
        {
            case (0): PlayerPrefs.SetInt("day", 1); break;
            case (1): PlayerPrefs.SetInt("day", 2); break;
            case (2): PlayerPrefs.SetInt("day", 3); break;
            case (3): PlayerPrefs.SetInt("day", 4); break;
            case (4): PlayerPrefs.SetInt("day", 5); break;
            case (5): PlayerPrefs.SetInt("day", 6); break;
            case (6): PlayerPrefs.SetInt("day", 7); break;
            case (7): PlayerPrefs.SetInt("day", 8); break;
            case (8): PlayerPrefs.SetInt("day", 9); break;
            case (9): PlayerPrefs.SetInt("day", 10); break;

            case (10): PlayerPrefs.SetInt("day", 11); break;
            case (11): PlayerPrefs.SetInt("day", 12); break;
            case (12): PlayerPrefs.SetInt("day", 13); break;
            case (13): PlayerPrefs.SetInt("day", 14); break;
            case (14): PlayerPrefs.SetInt("day", 15); break;
            case (15): PlayerPrefs.SetInt("day", 16); break;
            case (16): PlayerPrefs.SetInt("day", 17); break;
            case (17): PlayerPrefs.SetInt("day", 18); break;
            case (18): PlayerPrefs.SetInt("day", 19); break;
            case (19): PlayerPrefs.SetInt("day", 20); break;

            case (20): PlayerPrefs.SetInt("day", 21); break;
            case (21): PlayerPrefs.SetInt("day", 22); break;
            case (22): PlayerPrefs.SetInt("day", 23); break;
            case (23): PlayerPrefs.SetInt("day", 24); break;
            case (24): PlayerPrefs.SetInt("day", 25); break;
            case (25): PlayerPrefs.SetInt("day", 26); break;
            case (26): PlayerPrefs.SetInt("day", 27); break;
            case (27): PlayerPrefs.SetInt("day", 28); break;
            case (28): PlayerPrefs.SetInt("day", 29); break;
            case (29): PlayerPrefs.SetInt("day", 30); break;

            case (30): PlayerPrefs.SetInt("day", 31); break;

        }
    }

    public void nextBtn()
    {
        name = nameInput.text;
        Debug.Log(name);
        PlayerPrefs.SetString("name", name);
    }
}

