#include <iostream>
#include <math.h>

using namespace std;

void Task1(){

    int C;
    double F;

    cin >> C >> F;

    bool result = C == (F-32)* 5/9;
    cout << result;

}

void Task2(){
    double input;
    cin >> input;

    bool isWhole = (floor(input) == input);

    cout << isWhole << endl;
}

void Task3(){
    double input;
    cin >> input;

    double sqrtInput = sqrt(input);
    bool isSqrtInputWhole = (floor(sqrtInput) == sqrtInput);

    cout << isSqrtInputWhole << endl;
}

const double APPLES_PER_TREE = 115;
const double APPLES_PER_BUCKET = 80;

void Task4() {
    int numTrees;
    cin >> numTrees;

    double numberApples = APPLES_PER_TREE * numTrees;

    double numberBuckets = numberApples / APPLES_PER_BUCKET;
    cout << ceil(numberBuckets) << endl;
}

const double PI = 3.14159265;
void Task5() {
    double x;
    cin >> x;

    double sinx = (16 * x * (PI - x)) / (5 * PI * PI - 4 * x * (PI - x));

    cout << sinx << endl;

}

void Task6() {
    double x;
    cin >> x;

    double cosx = (PI*PI-4*x*x) / (PI*PI + x*x);
    cout << cosx << endl;
}
void Task7(){
    double r, phi;
    cin >> r >> phi;

    double real = r * (( PI * PI - 4 * phi * phi) / (PI * PI + phi * phi));
    double imaginary = r * ((16 * phi * (PI - phi)) / (5 * PI * PI - 4 * phi * (PI - phi)));

    cout << "a=" << real << endl;
    cout << "b=" << imaginary << endl;
}

int main(){
    Task7();

}