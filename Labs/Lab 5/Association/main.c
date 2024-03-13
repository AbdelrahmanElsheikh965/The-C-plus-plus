#include <iostream>
#include <string>

using namespace std;

class Book; // To avoid error afterwards

class Reader
{
    private:
        string name;

    public:

        /* some member methods */

		// Association is just about using some functionality which requires a separate class object regardless dependency.
        void read(Book* b)
        {
            cout << "Reader is now reading the book"<<endl;
        }

        ~Reader()
        {
            cout<<"Destroying Reader object";
        }

};

class Book
{
    private:
        int noOfPages;
        int libraryNo;

    public:
        /* Parametrized Constructor with Initializer list */
        Book(int noOfPages, int libraryNo) : noOfPages(noOfPages), libraryNo(libraryNo) {}

        ~Book()
        {
            cout<<"This Book object is destroyed"<<endl;
        }
};

int main()
{
    Book * b1 = new Book(650, 78);
    
    Reader r1;
    r1.read(b1);
    
    delete b1;

    return 0;
}