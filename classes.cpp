/*
 * private (default) - within class
 * protected
 * public - anywhere
 *
 * vs structs from C:
 * default access modifier for class - private
 * default access modifier for struct - public
 *
 * this - pointer to current instance
 */

#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person() { name="Nobody"; age=42; };
        // member initialization
        Person(string s, int i) : name(s), age(i) {}
        // user defined copy constructor
        // https://en.wikipedia.org/wiki/Copy_constructor_(C%2B%2B)
        Person(Person &p) { name=p.name; age=p.age; };
        string getName() { return name; };
        int getAge() { return age; };
        void setName(string s) { name=s; };
        void setAge(int i) { age=i; };
        void print();
};

void Person::print() {
    cout << "Name: " << name << " Age: " << age << endl;
}


int main() {

    Person p1("John Cleese", 77);
    Person p2;
    Person p3;
    p2.setName("Eric Idle");
    p2.setAge(74);

    p1.print();
    p2.print();
    p3.print();
}
