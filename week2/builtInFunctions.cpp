#include <iostream>
#include <cmath>
using namespace std;

void Task1() {
    double p, q;
    cin >> p >> q;

    double result = cbrt((-q/2)+ sqrt((q*q/4)+(p*p*p/27))) + cbrt(-q/2- sqrt((q*q/4)+(p*p*p/27)));

    cout << result << endl;
}

void Task2() {
    double K, p, n;
    cin >> K >> p >> n;

    double result = K* pow(1+p/100, n);

    cout << result << endl;
}

void Task3(){
    int input;

    cin >> input;

    // 2^(log2(n)) = n

    int closestPowerOfTwo = pow(2, ceil(log2(input)));

    cout << closestPowerOfTwo << endl;
}

void Task4() {
    int firstNumber, secondNumber;

    cin >> firstNumber >> secondNumber;

    int FirstMagnitude = log10(firstNumber) + 1;
    int SecondMagnitude = log10(secondNumber) +1;

    cout << abs(FirstMagnitude - SecondMagnitude) << endl;
}
int main() {

    Task4();
}