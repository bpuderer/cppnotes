#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec;
    vec.push_back(2001);
    vec.push_back(2010);

    // range based for loop
    for (auto i : vec ) {
        cout << i << endl;
    }

}
