using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(BoardVisualizer))]
public class CircuitBoardProvider : MonoBehaviour
{
    BoardVisualizer boardVisualizer;
    public CircuitBoard circuitBoard;
    public int id;
    // Start is called before the first frame update
    void Awake()
    {
        boardVisualizer = GetComponent<BoardVisualizer>();
        circuitBoard = new CircuitBoard();
        circuitBoard.boardID = id;
        GetPoints();
    }


    void GetPoints()
    {
        for (int i = 0; i < boardVisualizer.length; i++)
        {
            for (int j = 0; j < boardVisualizer.height; j++)
            {
                CircuitPoint circuitPoint = new CircuitPoint();
                circuitPoint.position = boardVisualizer.startDot.position + new Vector3(i * boardVisualizer.horizontalGap * boardVisualizer.size.x, j * boardVisualizer.verticalGap * boardVisualizer.size.z, 0);
                circuitPoint.coordinates = new IntVector2(i, j);
                circuitBoard.CircuitBoardsAdd(circuitPoint);
            }
        }
    }

    public CircuitPoint FindNearestCoordinate(Vector3 newPoint)
    {
        float d = -1;
        CircuitPoint point = new CircuitPoint();
        foreach (CircuitPoint p in circuitBoard.circuitPoints)
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
        return point;
    }

    CircuitPoint FindPoint(int x, int z)
    {
        CircuitPoint point = new CircuitPoint();
        foreach (CircuitPoint p in circuitBoard.circuitPoints)
        {
            if (p.coordinates.x == x && p.coordinates.z == z)
            {
                point = p;
                return point;
            }
        }
        return point;
    }
}
