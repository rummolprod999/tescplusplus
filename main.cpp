#include <iostream>
#include <string>
#include <utility>

using std::string;
using std::cout;
using std::endl;

class Person
{
public:
    string name;
    int age;
    Person(string n, int a)
    {
        name = std::move(n); age = a;
    }
    void move()
    {
        cout << name << " is moving" << endl;
    }
};
int main()
{
    Person person = Person("Tom", 22);
    cout << "Name: " << person.name << "\tAge: " << person.age << endl;
    person.name = "Bob";
    person.move();

    return 0;
}