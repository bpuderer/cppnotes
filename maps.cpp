#include <iostream>
#include <map>
using namespace std;


int main() {

    map<string, int> m;

    m["foo"] = 1;
    m["bar"] = 2;
    m.insert(pair<string, int>("baz", 3));

    map<string, int>::iterator it = m.find("bar");
    cout << "value of " << it->first << ": " << it->second << endl;

    cout << "Map size: " << m.size() << endl;

    for (it = m.begin(); it != m.end(); ++it)
        cout << it->first << ": " << it->second << endl;

    it = m.find("bar");
    m.erase(it);

    cout << "Map size: " << m.size() << endl;

}
