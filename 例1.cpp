#include <iostream>
using namespace std;

void swapPointer(int** p1, int** p2)
{
    int* t = *p1;
    *p1 = *p2;
    *p2 = t;
}

int main()
{
    int x = 30, y = 90;
    int *p1 = &x, *p2 = &y;

    cout << "交换前：" << endl;
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    cout << "x = " << x << ", y = " << y << endl;

    swapPointer(&p1, &p2);

    cout << "交换后：" << endl;
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}

