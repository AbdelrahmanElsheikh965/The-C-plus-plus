#include <iostream>

using namespace std;

class Queue
{
    int head = 1, tail;
    int queue_size;
    int* arr;

    public:

        /* Default Constructor */
        Queue()
        {
            queue_size   = 5;    // default size is 5
            tail         = 0;
            arr         = new int[queue_size]{0};
        }

        /* Parameterized Constructor */
        Queue(int sizeValue)
        {
            queue_size   = sizeValue;
            tail         = 0;
            arr          = new int[queue_size]{0};
        }

        int peek()
        {
            return arr[head];
        }

        void enqueue(int value)
        {
           if(tail < (queue_size))
           {
               tail++;
               arr[tail] = value;
           }
           else
           {
                cout<<"Queue is full\n";
           }
        }

        int dequeue()
        {
           if(head != queue_size)
           {
               int x = arr[head];
               head++;
               return x;
           }
           else
           {
                cout<<"Queue is empty\n";
           }
        }

        ~Queue()
        {
            cout<<"\nThis is destructor\n";
            delete[] arr;
        }
};


int main()
{
    Queue q(2);
    q.enqueue(64);
    q.enqueue(70);
    q.dequeue();
    cout<< q.peek() <<endl;

    return 0;
}
