#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s = "Final score: ";
    int i = 37;
    int j = 7;
    stringstream ss;

    ss << s;
    ss << i;
    ss << "-";
    ss << j;

    string info = ss.str();

    cout << info << endl;
}
