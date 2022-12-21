//edited
#pragma once
#include <iostream>
#include <math.h>
#include "Polynom.h"
using namespace std;

class Point : public Polynom
{
public:
    string pointName;
    int x_cord;
    int y_cord;

    enum Colors
    {
        RED,
        GREEN,
        BLUE,
        BLACK,
        PINK
    };
    void setPoint(char point_name, int x, int y)
    {
        pointName = point_name;
        x_cord = x;
        y_cord = y;
    }
    void PrintCords()
    {
        cout << pointName << endl;
        cout << "x = " << x_cord << "\ty = " << y_cord << endl << endl;
    }
};

float Distance(Point x, Point y)
{
    float num = pow(y.x_cord - x.x_cord, 2) + pow(y.y_cord - x.y_cord, 2);
    float result = sqrt(num);
    return result;
}

void Perimeter(Point points[], int length)
{
    float perimeter = 0.0;
    float distance;
    int i = 0;
    do
    {
        distance = Distance(points[i], points[i + 1]);
        cout << "Distance " << i + 1 << " : " << distance << endl;
        perimeter += distance;
        i++;
    } while (i < length - 1);
    distance = Distance(points[i], points[0]);
    cout << "Distance " << i + 1 << " : " << distance << endl << endl;
    perimeter += distance;
    cout << "Perimeter: " << perimeter << endl << endl;
}

void Diagonal(Point points[], int length)
{

    float diagonal;
    int i = 0;
    if (i < length - 3)
    {
        diagonal = Distance(points[i], points[i + 2]);
        cout << "Diagonal " << i + 1 << ": " << diagonal << endl;
        i++;
    }
    if (i < length - 2) {
        diagonal = Distance(points[i], points[i + 2]);
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


void SortX(Point arrayX[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arrayX[j].x_cord > arrayX[j + 1].x_cord)
            {
                Point temporary = arrayX[j];
                arrayX[j] = arrayX[j + 1];
                arrayX[j + 1] = temporary;
            }
        }
    }
}

void SortY(Point arrayY[], int Size)
{
    for (int i = 0; i < Size - 1; i++)
    {
        for (int j = 0; j < Size - i - 1; j++)
        {
            if (arrayY[j].y_cord > arrayY[j + 1].y_cord)
            {
                Point temporary = arrayY[j];
                arrayY[j] = arrayY[j + 1];
                arrayY[j + 1] = temporary;
            }
        }
    }
}


