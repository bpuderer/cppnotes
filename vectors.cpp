#include <iostream>
#include <vector>
using namespace std;


int main() {

    vector<int> vec;

    vec.push_back(1999);
    vec.push_back(2112);
    vec.push_back(2001);
    vec.push_back(2010);

    vec.insert(vec.begin()+2, 42);
    vec.erase(vec.begin()+1);

    for (unsigned int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }

    cout << vec.empty() << endl;
    vec.clear();
    cout << vec.empty() << endl;

}
