#include <iostream>
#include "Complexe.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Complexe c;

    c.afficher(c.add(c));

    return 0;
}
