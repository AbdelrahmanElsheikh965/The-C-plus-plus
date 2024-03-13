#include <iostream>

using namespace std;

/* Lab 4 : Copy constructor & Overloading operators */

class Stack
{
	int top;
	int stack_size;
	int* arr;

    public:

        /* Default Constructor */
        Stack()
        {
            stack_size  = 5;		// default size is 5
            top         = -1;
            arr         = new int[stack_size]{0};
        }

        /* Parameterized Constructor */
        Stack(int sizeValue)
        {
            stack_size  = sizeValue;
            top         = -1;
            arr         = new int[stack_size]{0};
        }

        /*
            overloading equal (=) operator to perform customized deep copy.
        */
        void operator = (const Stack &s)
        {
            stack_size  = s.stack_size;
            top         = s.top;
            arr         = s.arr;
        }

        const int getSize()
        {
            return this->stack_size;
        }

        int getTop()
        {
            return arr[top];
        }

        void push(int value)
        {
           if(top < (stack_size - 1))
           {
               top++;
               arr[top] = value;
           }
           else
           {
                cout<<"Stack is full\n";
           }
        }

        int pop()
        {
           if(top != -1)
           {
               int x = arr[top];
               top--;
               return x;
           }
           else
           {
                cout<<"Stack is empty\n";
           }
        }

        ~Stack()
        {
            cout<<"\nThis is destructor\n";
            delete[] arr;
        }
};


int main()
{
    Stack s1(2);
    s1.push(4);
    s1.push(10);

    Stack s2;
    s2.operator = (s1);   // we can do this too s2 = s1

    cout<<s2.getTop()<<endl;  
    return 0;
}
