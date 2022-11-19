using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WebCam : MonoBehaviour
{
    public RawImage display;
    WebCamTexture camTexture;

    private void Start()
    {

        // 현재 사용 가능한 카메라의 리스트
        WebCamDevice[] devices = WebCamTexture.devices;

        // 사용할 카메라를 선택
        int selectedCameraIndex = -1;
        for (int i = 0; i < devices.Length; i++)
        {
            // 사용 가능한 카메라 로그
            Debug.Log("Available Webcam: " + devices[i].name + ((devices[i].isFrontFacing) ? "(Front)" : "(Back)"));

            // 전면 카메라인지 체크
            if (devices[i].isFrontFacing == true)
            {
                selectedCameraIndex = i;
                break;
            }
        }

        if (camTexture != null)
        {
            display.texture = null;
            camTexture.Stop();
            camTexture = null;
        }
        WebCamDevice device = WebCamTexture.devices[selectedCameraIndex];
        camTexture = new WebCamTexture(device.name);
        display.texture = camTexture;
        camTexture.Play();
    }

}