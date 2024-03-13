# include <iostream>

using namespace std;

class Human
{
    private:
        std::string name;

    public:

        Human(const std::string& _name = "A-Human") : name(_name) {}

        virtual void GetName()
        {
            std::cout<< "Parent Name" <<std::endl;
        }

        void publicTest()
        {
            std::cout<< "Test Parent" <<std::endl;
        }
};



class SWE : public Human
{
    private:
        string name;

    public:

        SWE(const std::string& _name = "A-SWE") : name(_name) {}

        void GetName() override // Overriding virtual function in the base class.
        {
            std::cout<< "Child Name" <<std::endl;
        }

        void publicTest()
        {
            std::cout<< "Test child" <<std::endl;
        }

};

int main()
{
    Human * h1;
    SWE   s1;

    // Initializing pointer to avoid [wild pointer] and test relation between two entities.
    h1 = &s1;

	// Virtual function, binded at runtime. (late binding)
    h1->GetName();      	// prints Child Name
    
	// Non-virtual function, binded at compile time (early binding))
	h1->publicTest();  	// prints Test Parent

    return 0;
}