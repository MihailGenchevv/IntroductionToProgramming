#include <iostream>
#define BEG 'A'
#define END 'Z'
using namespace std;



void Task1() {
    int n;
    cin >> n;

    cout << (char) n << endl;
}

void Task2() {
    char letter;
    cin >> letter;
    if (letter == 'A'){
        cout << 1 << endl;
    }
    if (letter == 'B'){
        cout << 2 << endl;
    }
};


void Task3() {
    char firstL, secondL;
    cin >> firstL >> secondL;

    int sum = (int) firstL + (int) secondL;
    cout << sum << endl;
}

void Task4() {
    int first, second;
    cin >> first >> second;

    int product = first * second;
    cout << product << endl;

}

void Task5(){
    char input, symmetric;
    cin >> input;

    symmetric = BEG + (END - input);

    cout << symmetric << endl;

}
int main() {
    Task5();
}