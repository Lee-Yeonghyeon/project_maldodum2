using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TrainController : MonoBehaviour
{
    public bool correct;
    public float positionX;
    public float positionY;
    public string sceneName;

    private bool triggerActive = false;
    private AudioSource trainAudio;

    void Start()
    {
        trainAudio = GameObject.Find("train").GetComponent<AudioSource>();
    }


    private void OnMouseDrag()
    {
        Vector3 mousePosition = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10);
        this.transform.position = Camera.main.ScreenToWorldPoint(mousePosition);
    }

    private void OnMouseUp()
    {
        if (triggerActive && correct)
        {
            SceneManager.LoadScene(sceneName);
        }
        if(triggerActive && !correct)
        {
            trainAudio.Play();
        }
        this.transform.position = new Vector3(positionX, positionY, 0.0f);
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        triggerActive = true;
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        triggerActive = false;
    }
}
