#include <iostream>
using namespace std;

void example(int* &p, double *q) {
    int newValue = 100;
    double newDouble = 200.5;

    p = &newValue;     // Changes the original pointer
    q = &newDouble;    // Changes only the local copy of the pointer
    cout<<*p<<endl;
    cout<<*q<<endl;
}

int main() {
    int x = 10;
    double y = 20.5;

    int *a = &x;
    double *b = &y;

    example(a, b);

    cout << *a << endl;  // 100
    cout << *b << endl;  // 20.5

    return 0;
}