using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CardController : MonoBehaviour
{
    AudioSource soundSource;
    public Image card;
    public Sprite active_card;
    public Sprite deactive_card;
    bool active = false;

    void Start()
    {
        soundSource = GetComponent<AudioSource>();
    }

    void Update()
    {
        if (!soundSource.isPlaying && active)
        {
            card.sprite = deactive_card;
            active = false;
        }
    }

    public void PlayCard()
    {
        card.sprite = active_card;
        soundSource.Play();
        active = true;
    }
}
