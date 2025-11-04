#include <iostream>
#include <stdio.h>

using namespace std;

long long int fact(int num);

int main(int argc, char* argv[])
{
     int a = 10;
     if(argc > 1)
     {
          if(argv[1][0] != '\0')
               a = atoi(argv[1]);
     }
     long long int res = fact(a);
     cout << "Factorial of " << a << " is : " << res << endl;
     return 0;
}

long long int fact(int num)
{
     int fct = 1;
     for(int i = 2; i<=num;i++)
     {
          fct *= i;
     }
     return fct; 
}

