#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    int age;

    void init(string _name, int _age)
    {
        name = _name;
        age = _age;
    }
    void Showinfo()
    {
        cout << "개인정보" << endl;
        cout << name << age << endl;
    }
};

int main()
{
    Person personA;
    personA.init("송진욱", 27);
    personA.Showinfo(); 
}
