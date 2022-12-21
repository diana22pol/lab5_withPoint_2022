#pragma once
#include <iostream>
#include <math.h>
#include "Polynom.h"

using namespace std;

class Point : public Polynom
{
public:
    string pointName;
    int x;
    int y;

    enum Colors
    {
        RED,
        GREEN,
        BLUE,
        BLACK,
        PINK
    };
    void setPoint(char c, int a, int b)
    {
        pointName = c;
        x = a;
        y = b;
    }
    void printCords()
    {
        cout << pointName << endl;
        cout << "x = " << x << "\ty = " << y << endl << endl;
    }

};

float distance(Point a, Point b)
{
    float num = pow(b.x - a.x, 2) + pow(b.y - a.y, 2);
    float res = sqrt(num);
    return res;
}

void Perimeter(Point points[], int len)
{
    float perimeter = 0.0;
    float dst;
    int i = 0;
    do
    {
        dst = distance(points[i], points[i + 1]);
        cout << "Distance " << i + 1 << " : " << dst << endl;
        perimeter += dst;
        i++;
    } while (i < len - 1);
    dst = distance(points[i], points[0]);
    cout << "Distance " << i + 1 << " : " << dst << endl << endl;
    perimeter += dst;
    cout << "Perimeter: " << perimeter << endl << endl;
}

void Diagonal(Point points[], int len)
{

    float diagonal;
    int i = 0;
    if (i < len - 3)
    {
        diagonal = distance(points[i], points[i + 2]);
        cout << "Diagonal " << i + 1 << ": " << diagonal << endl;
        i++;
    }
    if (i < len - 2) {
        diagonal = distance(points[i], points[i + 2]);
        cout << "Diagonal " << i + 1 << ": " << diagonal << endl;
        i++;
    }
    float maximum = 0;
    if (maximum <= diagonal)
    {
        maximum = diagonal;
    }
    cout << "MaxDiagonal = " << maximum << endl;
}


void sortX(Point arrayX[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arrayX[j].x > arrayX[j + 1].x)
            {
                Point temp = arrayX[j];
                arrayX[j] = arrayX[j + 1];
                arrayX[j + 1] = temp;
            }
        }
    }
}

void sortY(Point arrayY[], int Size)
{
    for (int i = 0; i < Size - 1; i++)
    {
        for (int j = 0; j < Size - i - 1; j++)
        {
            if (arrayY[j].y > arrayY[j + 1].y)
            {
                Point temp = arrayY[j];
                arrayY[j] = arrayY[j + 1];
                arrayY[j + 1] = temp;
            }
        }
    }
}

