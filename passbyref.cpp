// pass by reference

#include <iostream>
using namespace std;

void swap(int&, int&);

int main() {

    int a = 28;
    int b = 3;
    cout << "a: " << a << " b: " << b << endl;
    swap(a, b);
    cout << "a: " << a << " b: " << b << endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
