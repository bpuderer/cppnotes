// https://stackoverflow.com/a/240308

#include <iostream>
using namespace std;

int *getPointerToNine();

int main() {
    int *p;
    p = getPointerToNine();
    cout << *p << endl;
    delete p; // de-allocate memory allocated using new
}

int *getPointerToNine() {
    // allocate on heap, if int x=9; return &x; then dangling pointer
    // since x would go out of scope after returning
    int *x = new int;
    *x = 9;
    return x;
}
