using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ScrollManager : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public Scrollbar scrollbar;
    public Transform contentTr;

    const int SIZE = 2;
    float[] pos = new float[SIZE];
    float distance, curPos, targetPos;
    bool isDrag;
    int targetIndex;

    void Start()
    {
        //스크롤 자동 넘길 마우스 위치 지정
        distance = 1f / (SIZE - 1);
        for (int i = 0; i < SIZE; i++) pos[i] = distance * i;
    }

    float SetPos()
    {
        for(int i = 0; i < SIZE; i++)
            if(scrollbar.value < pos[i] + distance * 0.5f && scrollbar.value > pos[i] - distance * 0.5f)
            {
                return pos[i];
            }
        return 0;
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        curPos = SetPos();
    }

    public void OnDrag(PointerEventData eventData)
    {
        isDrag = true;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        isDrag = false;

        //end drag가 화면의 절반 이상을 넘겼을 경우, 자동 스크롤
        for(int i = 0; i<SIZE; i++)
            if (scrollbar.value < pos[i] + distance * 0.5f && scrollbar.value > pos[i] - distance * 0.5f)
            {
                targetPos = pos[i];
            }

        //목표가 수직 스크롤이고, 옆에서 옮겨왔다면 수직 스크롤을 맨 위로 올림
        for (int i = 0; i < SIZE; i++)
            if (contentTr.GetChild(i).GetComponent<ScrollScript>() && curPos != pos[i] && targetPos == pos[i])
                contentTr.GetChild(i).GetChild(1).GetComponent<Scrollbar>().value = 1;
    }

    void Update()
    {
        //자동 스크롤이 부드럽게 되도록 update에서 호출
        if(!isDrag) scrollbar.value = Mathf.Lerp(scrollbar.value, targetPos, 0.1f);   
    }


    //todo. 23세 45세 인덱스 눌렀을 때 자동 스크롤 하지 않거나(tabClick 삭제) 디자인을 바꾸거나
    public void TabClick(int n)
    {
        targetIndex = n;
        targetPos = pos[n];
    }
}
