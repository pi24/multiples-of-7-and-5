/*

*/
#include <iostream>

using namespace std;

int main()
{
   int x;
   int z = 1;
   cout << "enter your number" <<endl;
   cin >> x;
   cout << "your numbers" << endl;
   while( z <= x)
   {
        if(z%7 == 0|| z%5 == 0)
        {
            cout << z << endl;
        }
        z++;
    }
} 

