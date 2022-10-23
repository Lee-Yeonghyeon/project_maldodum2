using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ViewCard : MonoBehaviour
{

    Vector2 startPos;
    
    void Start()
    {
        
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            this.startPos = Input.mousePosition;
        } else if (Input.GetMouseButtonUp(0))
        {
            Vector2 endPos = Input.mousePosition;
            float swipeLength = endPos.x - this.startPos.x;

            //우->좌 방향으로 스크롤하면 선택한 책에 대한 화면으로 이동
            if (swipeLength < -350)
            {
                swipeLength = 0;

                string dictionaryBook = PlayerPrefs.GetString("dictionary");
                if (dictionaryBook.Equals("chicken"))
                {
                    SceneManager.LoadScene("10.2_NiceChicken");
                } else if (dictionaryBook.Equals("cookcook")){
                    SceneManager.LoadScene("10.3_CookCookABC");
                }
            }
        }

    }
}
