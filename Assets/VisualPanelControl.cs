using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VisualPanelControl : MonoBehaviour
{
    [SerializeField]
    Transform inventory;
    public void ToggleInventory()
    {
        inventory.gameObject.SetActive(!inventory.gameObject.activeSelf);
    }

}
