#include <iostream>


using namespace std;

void Task1(){
    int a, b, c, tmp = 0;
    cin >> a >> b >> c; // 0 1 3

    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    if (a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }

    if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
    cout << a << ' ' << b << ' ' << c << '\n';
}

void Task2() {
    int i;
    cin >> i;

    int a, b, c;
    a = i % 10;
    i = i / 10;
    b = i % 10;
    i = i / 10;
    c = i % 10;

    if (a == b or a == c or b == c) {
        cout << "True" << endl;
    }else {
        cout << "False" << endl;
    }
}
int main() {
    Task2();
}