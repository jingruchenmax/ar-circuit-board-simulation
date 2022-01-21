using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotatePanelController : MonoBehaviour
{
    Quaternion initialRotation;
    private void Start()
    {
        initialRotation = transform.rotation;
    }
    // Start is called before the first frame update
    public void toggleActive()
    {
        gameObject.SetActive(!gameObject.activeSelf);
    }

    public void InitialWorldRotation()
    {
        transform.rotation = initialRotation;
    }
}
