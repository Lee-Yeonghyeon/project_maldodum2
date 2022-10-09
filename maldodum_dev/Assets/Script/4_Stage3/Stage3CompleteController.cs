using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Stage3CompleteController : MonoBehaviour
{
    public SpriteRenderer image;

    public Sprite sprite1;
    public Sprite sprite2;
    public Sprite sprite3;

    void Start()
    {
        PlayerPrefs.SetString("Stage3", "complete");

        string word = PlayerPrefs.GetString("Word");

        if (word.Equals("병아리"))
        {
            this.image.sprite = this.sprite1;
        }
        else if (word.Equals("오리"))
        {
            this.image.sprite = this.sprite2;
        }
        else if (word.Equals("삐악삐악"))
        {
            this.image.sprite = this.sprite3;
        }
    }
}
