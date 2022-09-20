using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ScrollScript : ScrollRect
{

    bool forParent;
    ScrollManager scrollManager;
    ScrollRect parentScrollRect;

    protected override void Start()
    {
        scrollManager = GameObject.FindWithTag("ScrollManager").GetComponent<ScrollManager>();
        parentScrollRect = GameObject.FindWithTag("ScrollManager").GetComponent<ScrollRect>();
    }

    public override void OnBeginDrag(PointerEventData eventData)
    {
        //begin drag 시 수평이동이 크면 부모가 드래그 시작, 수직이동이 크면 자식이 드래그 시작
        forParent = Mathf.Abs(eventData.delta.x) > Mathf.Abs(eventData.delta.y);

        //수평 드래그일 경우, 부모 scrollView에 전달
        if (forParent)
        {
            scrollManager.OnBeginDrag(eventData);
            parentScrollRect.OnBeginDrag(eventData);
        }
        //수직 드래그일 경우, 자식 scrollView 동작
        else base.OnBeginDrag(eventData);
    }

    public override void OnDrag(PointerEventData eventData)
    {
        //수평 드래그일 경우, 부모 scrollView에 전달
        if (forParent)
        {
            scrollManager.OnDrag(eventData);
            parentScrollRect.OnDrag(eventData);
        }
        //수직 드래그일 경우, 자식 scrollView 동작
        else base.OnDrag(eventData);
    }

    public override void OnEndDrag(PointerEventData eventData)
    {
        //수평 드래그일 경우, 부모 scrollView에 전달
        if (forParent)
        {
            scrollManager.OnEndDrag(eventData);
            parentScrollRect.OnEndDrag(eventData);
        }
        //수직 드래그일 경우, 자식 scrollView 동작
        else base.OnEndDrag(eventData);
    }
}
