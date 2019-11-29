#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point A(1,1);
    Point B(2,2);
    Point C(3,3);

    A.afficherPoint();
    B.afficherPoint();
    C.afficherPoint();


    B.translatePoint(5);

    A.positionnerPoint(3,8);

    B.comparerPoint(C);

    A.rotatePoint(45);

    C.symetriquePoint();

    A.afficherPoint();
    B.afficherPoint();
    C.afficherPoint();


    return 0;
}
