using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[RequireComponent(typeof(AudioSource))]
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
        AudioClip audioAsset = (AudioClip)Resources.Load(answer);
        audioSource.clip = (AudioClip)audioAsset;
        audioSource.Play();
    }
}
