#include <iostream>

using namespace std;

/* Lab 8 : Template on stack */
/*
    It's all about replacing one type of the class or the function or whatever
    with a more general type to be specified in the future when using (compiling class code)
    here we also passed N as an argument to the template.
*/

template<typename T, int N>
class Stack
{
	T top;
	T stack_size;
	T* arr;

    public:

        /* Default Constructor */
        Stack()
        {
            stack_size  = 5;		// default size is 5
            top         = -1;
            arr         = new T[stack_size]{0};
        }

        /* Parameterized Constructor */
        Stack(T sizeValue)
        {
            stack_size  = sizeValue;
            top         = -1;
            arr         = new T[stack_size]{0};
        }

        T getTop()
        {
            return arr[top];
        }

        void push(T value)
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

        T pop()
        {
           if(top != -1)
           {
               T x = arr[top];
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
    Stack <int, 3> s;
    s.push(16);
    s.push(20);
    s.pop();
    cout<<s.getTop()<<endl;

    return 0;
}
