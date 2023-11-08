#include <iostream>

using namespace std;

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
    Stack s(3);
    s.push(16);
    s.push(20);
    s.pop();
    cout<<s.getTop()<<endl;

    return 0;
}
