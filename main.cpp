//edited
#include <iostream>
#include <math.h>
#include "Point.h"
#include "Polynom.h"
using namespace std;

int main() {
    Polynom object("ABCD");
    const int length = 4;
    Point points[length];
    points[0].setPoint('A', 3, 8);
    points[1].setPoint('B', 2, 5);
    points[2].setPoint('C', 1, 7);
    points[3].setPoint('D', 4, 9);
    cout << object.getName() << endl;

    Perimeter(&points[0], length);
    Diagonal(&points[0], length);

    cout << endl;
    cout << endl << "Output points:" << endl;
    points[0].PrintCords();
    points[1].PrintCords();
    points[2].PrintCords();
    points[3].PrintCords();

    SortX(&points[0], length);
    cout << "sorted by x:" << endl;
    points[0].PrintCords();
    points[1].PrintCords();
    points[2].PrintCords();
    points[3].PrintCords();

    SortY(&points[0], length);
    cout << "sorted by y:" << endl;
    points[0].PrintCords();
    points[1].PrintCords();
    points[2].PrintCords();
    points[3].PrintCords();

    return 0;
}

