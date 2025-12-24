#include <iostream>
using namespace std;

void jiaohuan(int* &p1, int* &p2){
    int *t = p1;
    p1 = p2;
    p2 = t;
}

int main(){
    int x = 30, y = 90;
    int *p1 = &x, *p2 = &y;
    cout << "test case" << endl;
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    cout << "x = " << x << ", y = " << y << endl;;
    jiaohuan(p1, p2);
    cout << "after swap" << endl;
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    cout << "x = " << x << ", y = " << y << endl;
}



