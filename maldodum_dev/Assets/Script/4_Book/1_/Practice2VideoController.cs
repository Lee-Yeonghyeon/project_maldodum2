using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Practice2VideoController : MonoBehaviour
{
    public GameObject mouseCanvas;
    public GameObject tougueCanvas;

    public Image btn;
    public Sprite mouseBtn;
    public Sprite tougueBtn;
    bool active = false;

    void Start()
    {
        mouseCanvas.SetActive(true);
        tougueCanvas.SetActive(false);
    }

    void Update()
    {
        
    }

    public void ToggleBtn()
    {
        if (active)     //true: 입모양 선택, false: 혀모양 선택
        {
            mouseCanvas.SetActive(true);
            tougueCanvas.SetActive(false);
            btn.sprite = mouseBtn;
            active = false;
        } else
        {
            mouseCanvas.SetActive(false);
            tougueCanvas.SetActive(true);
            btn.sprite = tougueBtn;
            active = true;
        }
    }
}
