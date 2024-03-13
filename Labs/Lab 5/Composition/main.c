#include <iostream>

using namespace std;

/*
    Composition Example : Strong Has-A relationship (Ownership)
						  a class can't exist without another class (dependent)
						  i.e.(Car and Engine)
*/

class Engine
{
    string name;

    public:
        Engine(string _name = "test_engine")
        {
            name = _name;
            cout<<"Constructing Engine Object"<<endl;
        }

        void printInfo()
        {
            cout<<"Name of the Engine : "<< this->name <<endl;
        }

        ~Engine()
        {
            cout<<"Destructing Engine Object"<<endl;
        }

};

class Car
{
    string model;
    Engine e;

    public:

        Car()
        {
            cout<<"Constructing Car Object"<<endl;
        }

        ~Car()
        {
            cout<<"Destructing Car Object"<<endl;
        }

    friend Engine& printEngineName(Car* c);
};

/*
    We return the reference to the same object to avoid
    creating a copy of Engine object during return
*/
Engine& printEngineName(Car* c)
{
    return c->e;
}

int main()
{
    Car * c1 = new Car();
    printEngineName(c1).printInfo();   // For Illustration Purposes.

    /* When we delete the outer-level object the inner-level will be deleted accordingly. */
    /* delete c1 will also delete e  */
	delete(c1);

    return 0;
}
