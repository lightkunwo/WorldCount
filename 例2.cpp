#include <iostream>
#include <climits>
using namespace std;

// 指针版交换函数
void swapPointer(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}



int main() {
    int x = 30, y = 90; //初始化数值
    int *p1 = &x, *p2 = &y;
    cout << "before swap" << endl;  //交换前结果
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swapPointer(p1, p2);
    cout << "after swap" << endl;  //交换后结果
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;

}

