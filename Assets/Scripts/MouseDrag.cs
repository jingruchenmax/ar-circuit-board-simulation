using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class MouseDrag : MonoBehaviour
{
    public int n_pin_horizental = 2;
    public int n_pin_vertical = 1;

    public int n_board = 1;
    public float gapSize;
    public bool isDragged = false;

    bool isHorizental = true;
    CircuitManager manager;
    Vector3 originalPos;
    //void OnMouseDrag()
    //{
    //    Vector3 cursorScreenPoint = new Vector3(Input.mousePosition.x, Input.mousePosition.y, Camera.main.WorldToScreenPoint(gameObject.transform.position).z);
    //    Vector3 cursorPosition = Camera.main.ScreenToWorldPoint(cursorScreenPoint);
    //    Vector3 nearestPosition;
    //    nearestPosition = manager.FindNearestPosition(1,cursorPosition);
    //    transform.position = new Vector3(nearestPosition.x + 1 / 2f * (n_pin-1) * gapSize, transform.position.y, nearestPosition.z);
    //   // transform.position = new Vector3(nearestPosition.x, transform.position.y, nearestPosition.z);
    //}

    private void Start()
    {
        originalPos = transform.position;
        manager = GameObject.Find("CircuitManager").GetComponent<CircuitManager>();
    }
    public void Update()
    {
        if (isDragged)
        {
            AttachNearestPoint();
        }

        // transform.position = new Vector3(nearestPosition.x, transform.position.y, nearestPosition.z);
    }
    public void ToggleisDragged()
    {
        isDragged = !isDragged;
    }

    public void RotateClockwise()
    {
        transform.localEulerAngles = (transform.localEulerAngles + new Vector3(0, 90, 0));
        isHorizental = !isHorizental;
    }

    public void RotateCounterClockwise()
    {
        transform.localEulerAngles = (transform.localEulerAngles + new Vector3(0, -90, 0));
        isHorizental = !isHorizental;
    }

    public void DestroyObject()
    {
        gameObject.SetActive(false);
    }

    public void AttachNearestPoint()
    {
        Vector3 nearestPosition;
        float xOffset = 0;
        float yOffset = 0;
        if (isHorizental)
        {
            if(n_pin_horizental % 2 == 0)
            {
                xOffset = 1 / 2f * gapSize;
            }

            if (n_pin_vertical % 2 == 0)
            {
                yOffset = 1 / 2f * gapSize;
            }
        }

        else
        {
            if (n_pin_vertical % 2 == 0)
            {
                xOffset = 1 / 2f * gapSize;
            }

            if (n_pin_horizental % 2 == 0)
            {
                yOffset = 1 / 2f * gapSize;
            }
        }

        nearestPosition = manager.FindNearestPosition(transform.position);
        transform.position = new Vector3(nearestPosition.x +xOffset, nearestPosition.y +yOffset, originalPos.z);
    }
}
