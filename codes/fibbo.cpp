#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
     int n;
     cout << "n number : " ;
     cin >> n;
     int a = 1, b = 1, temp;
     //cout << a << " " << b << " " ; 
     for(int i = 3; i <= n; i++)
     {
          temp = a + b;
          //a = b;
          //b = temp;
          b = a;
          a = temp;
          //cout << b << " " ; 
     }
          cout << temp << " " ; 
     cout << endl;
     return 0;
}
