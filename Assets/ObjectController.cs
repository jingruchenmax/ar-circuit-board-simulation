using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectController : MonoBehaviour
{
    public void DestroyObject()
    {
        GameObject.Destroy(this);
    }


}
