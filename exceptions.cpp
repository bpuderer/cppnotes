#include <iostream>
using namespace std;

class TestClass {
    public:
    TestClass() {}
    ~TestClass() {
        // exception here causes core dump
        //throw 9;
    }
};

int main() {
    try {
        TestClass tc;
        throw 10;
    } catch(int i) {
        cout << i << endl;
    }
}
