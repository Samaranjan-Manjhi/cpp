#include <iostream>

using namespace std;

//int fact(int n)
long long int fact(int n)
{
     if(n <= 1)
          return 1;
     else
          return n * fact(n-1);
}

int main()
{
     int num;
     cout << "Enter number to get factorial: ";
     cin >> num;
     if(num < 0)
     {
          cout << "Wrong Input: Enter postive number.\n";
     }
     else
     {
          cout << "Factorial of " << num << " is " << fact(num) << ".\n";
     }
     return 0;
}


