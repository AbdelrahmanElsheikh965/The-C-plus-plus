#include <iostream>

using namespace std;

void swapByReference(int &x, int &y);

int main()
{
   int x = 10, y = 5;

   swapByReference(x, y);

   cout<<"-- Swap By Reference --\n";
   cout<<"X : "<<x;
   cout<<"\n";
   cout<<"Y : "<<y;

   return 0;
}

void swapByReference(int &x, int &y)
{
   int temp = x;
   x = y;
   y = temp;
}
