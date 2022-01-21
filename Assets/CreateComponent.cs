using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateComponent : MonoBehaviour
{
    [SerializeField]
    List<GameObject> components;
    public void NewComponents(int index)
    {
        //start from 0
        if (index < components.Count)
        {
            Instantiate(components[index], this.transform);
        }
    }
}
