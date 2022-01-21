using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class CircuitPoint
{
    public Vector3 position;
    public IntVector2 coordinates;
    public int n_board;
    public CircuitPoint(Vector3 _position,IntVector2 _coordinates, int n_board)
    {
        position = _position;
        coordinates = _coordinates;
        this.n_board = n_board;
    }
    public CircuitPoint(Vector3 _position, IntVector2 _coordinates)
    {
        position = _position;
        coordinates = _coordinates;
    }
    public CircuitPoint()
    {
        position = new Vector3(0,0,0);
        coordinates = new IntVector2(0,0);
    }
}
