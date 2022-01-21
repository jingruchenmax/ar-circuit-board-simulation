using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class CircuitManager : MonoBehaviour
{
    [SerializeField]
    List<CircuitBoardProvider> circuitBoardProviders;

    List<CircuitPoint> circuitPointsAll;

    private void Start()
    {
        circuitPointsAll = new List<CircuitPoint>();
        foreach (CircuitBoardProvider b in circuitBoardProviders)
        {
            foreach (CircuitPoint p in b.circuitBoard.circuitPoints)
            {
                circuitPointsAll.Add(p);
            }
        }
    }
    public Vector3 FindNearestPosition(int id,Vector3 newPoint)
    {
        foreach(CircuitBoardProvider b in circuitBoardProviders)
        {
            if (b.circuitBoard.boardID == id)
            {
             //   Debug.Log("nearest" + b.FindNearestCoordinate(newPoint).position);
                return b.FindNearestCoordinate(newPoint).position;
            }
        }
        return Vector3.zero;
    }

    public Vector3 FindNearestPosition(Vector3 newPoint)
    {

        float d = -1;
        CircuitPoint point = new CircuitPoint();
        foreach (CircuitPoint p in circuitPointsAll)
        {
            float temp = Vector3.Distance(newPoint, p.position);
            if (d == -1)
            {
                point = p;
                d = temp;
            }
            else if (temp < d)
            {
                point = p;
                d = temp;
            }
        }
        return point.position;
    }
}
