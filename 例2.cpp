#include <iostream>
#include <climits>
using namespace std;

// 指针版交换函数
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}



int main() {
    int x = 30, y = 90;
    int *p1 = &x, *p2 = &y;
    cout << "test case" << endl;
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swap(p1, p2);
    cout << "after swap" << endl;
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}