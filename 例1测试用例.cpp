#include <iostream>
#include <climits>
using namespace std;

void Swap(int* &p1, int* &p2){
    int *t = p1;
    p1 = p2;
    p2 = t;
}

// 测试函数
void test_swapPointer(int x, int y) {
    int a = x, b = y;
    int *p1 = &a, *p2 = &b;

    cout << "测试用例：*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    cout << "a = " << a << ", b = " << b << endl;

    Swap(p1, p2); // 传入指针的地址交换指针

    cout << "交换后：" << endl;
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    cout << "a = " << a << ", b = " << b << endl;

    if (*p1 == b && *p2 == a) {
        cout << "测试结果： 成功\n" << endl;
    } else {
        cout << "测试结果： 失败\n" << endl;
    }
}

int main() {
    test_swapPointer(20, 40);
    test_swapPointer(-10, 10);
    test_swapPointer(0, 5);
    test_swapPointer(2, 2);
    test_swapPointer(INT_MAX, INT_MIN);

    return 0;
}
