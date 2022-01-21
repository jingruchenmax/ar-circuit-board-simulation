using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoardVisualizer : MonoBehaviour
{
    public int length;
    public int height;
    public float horizontalGap;
    public float verticalGap;
    public float dotSize = 0.01f;
    public Vector3 size;

    public Transform startDot;

    void OnDrawGizmosSelected()
    {
        size = transform.localScale;
        // Draw a yellow sphere at the transform's position
        Gizmos.color = Color.yellow;
        
        for(int i = 0; i < length; i++)
        {
            for(int j = 0; j < height; j++)
            {
                Gizmos.DrawSphere(startDot.position + new Vector3(i*horizontalGap*size.x, j * verticalGap * size.z, 0), dotSize);
            }
        }

    }

}
