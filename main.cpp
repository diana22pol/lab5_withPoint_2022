#include <iostream>
#include <math.h>
#include "Point.h"
#include "Polynom.h"
using namespace std;

int main() {
    Polynom obj("ABCD");
    const int len = 4;
    Point points[len];
    points[0].setPoint('A', 3, 8);
    points[1].setPoint('B', 2, 5);
    points[2].setPoint('C', 1, 7);
    points[3].setPoint('D', 4, 9);
    cout << obj.getName() << endl;

    Perimeter(&points[0], len);
    Diagonal(&points[0], len);

    cout << endl;
    cout << endl << "Output points:" << endl;
    points[0].printCords();
    points[1].printCords();
    points[2].printCords();
    points[3].printCords();

    sortX(&points[0], len);
    cout << "sorted by x:" << endl;
    points[0].printCords();
    points[1].printCords();
    points[2].printCords();
    points[3].printCords();

    sortY(&points[0], len);
    cout << "sorted by y:" << endl;
    points[0].printCords();
    points[1].printCords();
    points[2].printCords();
    points[3].printCords();

    return 0;
}
