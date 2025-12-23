#include <iostream>
#include <climits>
using namespace std;

// 指针版交换函数
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// 测试函数
void test_swap(int x, int y) {
    int a = x, b = y;
    cout << "测试用例：a = " << a << ", b = " << b << endl;
    swap(&a, &b); // 传入地址
    cout << "交换后：a = " << a << ", b = " << b << endl;
    if (a == y && b == x) {
        cout << "测试结果：成功\n" << endl;
    } else {
        cout << "测试结果：失败\n" << endl;
    }
}

int main() {
    test_swap(30, 90);
    test_swap(-10, 20);
    test_swap(0, 5);
    test_swap(7, 7);
    test_swap(INT_MAX, INT_MIN);

    return 0;
}
