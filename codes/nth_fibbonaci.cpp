#include <iostream>
using namespace std;

long long fibonacci(int n) 
{
     if (n == 1 || n == 2) 
     {
          return 1;
     }    
     return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
     int N;
     cout << "Enter the value of N: ";
     cin >> N;
     cout << "Fibonacci number at position " << N << " is: " << fibonacci(N) << endl;
     return 0;
}

