#include <iostream>
#include <string>
using namespace std;


int main() {

    const string dashes(8, '-');
    string in;
    string s1("hey");
    string s2 = "you";

    cout << "Please enter some text: ";
    cin >> in;
    cout << "You entered: " << in << ". Length: " << in.size() << endl;
    cout << dashes << endl;

    // http://en.cppreference.com/w/cpp/string/basic_string
    cout << "s1: " << s1 << " s2: " << s2 << endl;
    s1.swap(s2);
    cout << "s1: " << s1 << " s2: " << s2 << endl;
    s2.assign(s1); // s2 = s1;
    cout << "s1: " << s1 << " s2: " << s2 << endl;

    cout << "concat" " strings" << endl;
}

