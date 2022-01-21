using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CircuitBoard
{
    public List<CircuitPoint> circuitPoints = new List<CircuitPoint>();
    public int boardID;

    public void CircuitBoardsAdd(CircuitPoint point)
    {
        circuitPoints.Add(point);
    }

}
