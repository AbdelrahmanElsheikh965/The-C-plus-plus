#include <iostream>

using namespace std;

/*
    Aggregation Example : Weak Has-A relationship (No Ownership)
						  a class can exist without another class (independent)
						  i.e. (Hospital and Patient)
*/

class Patient
{
    string name;

    public:
        Patient(string _name = "test_patient")
        {
            name = _name;
            cout<<"Constructing Patient Object"<<endl;
        }

        void printInfo()
        {
            cout<<"Name of the patient : "<< this->name <<endl;
        }

        ~Patient()
        {
            cout<<"Destructing Patient Object"<<endl;
        }

};

class Hospital
{
    string address;
    Patient * p;

    public:
        Hospital()
        {
			//
        }

        Hospital(Patient * _p)
        {
            p = _p;
            cout<<"Constructing Hospital Object"<<endl;
        }

        ~Hospital()
        {
            cout<<"Destructing Hospital Object"<<endl;
        }

};


int main()
{
    Patient p1 = Patient();

    Hospital * h1 = new Hospital(&p1);
    delete(h1);

    p1.printInfo();	// still prints patient info so it's independent ly co-related with Hospital.

    return 0;
}
