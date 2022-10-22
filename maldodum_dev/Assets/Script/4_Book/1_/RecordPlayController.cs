using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RecordPlayController : MonoBehaviour
{
    public string answer;

    private AudioSource audioSource;


    private void Start()
    {
        audioSource = this.GetComponent<AudioSource>();
    }

    public void SttResultPlay()
    {
        audioSource.Play();
    }

}
