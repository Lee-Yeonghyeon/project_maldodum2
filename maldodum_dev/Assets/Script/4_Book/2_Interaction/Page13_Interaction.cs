using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Page13_Interaction : MonoBehaviour
{
    void Start()
    {
        
    }

    void Update()
    {
        
    }

    private void OnMouseDrag()
    {
        Vector3 mousePosition = new Vector3(Input.mousePosition.x, 940, 10);
        this.transform.position = Camera.main.ScreenToWorldPoint(mousePosition);
    }
}
