#include <iostream>

using namespace std;

void swapByValue(int x, int y);

int main()
{
   int x = 10, y = 5;

   cout<<"-- Swap By Value (Copy) --\n";
   swapByValue(x, y);

   return 0;
}

void swapByValue(int x, int y)
{
   int temp = x;
   x = y;
   y = temp;

   cout<<"X : "<<x;
   cout<<"\n";
   cout<<"Y : "<<y;
}

