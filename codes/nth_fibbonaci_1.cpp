#include <iostream>
using namespace std;

long long fibonacci(int n) 
{
     if (n == 1 || n == 2) 
     {
          return 1;
     }
     long long prev1 = 1, prev2 = 1, current;
     for (int i = 3; i <= n; i++) 
     {
          current = prev1 + prev2;
          prev2 = prev1;
          prev1 = current;
     }
     return current;
}

int main() 
{
     int N;
     cout << "Enter the value of N: ";
     cin >> N;
     cout << "Fibonacci number at position " << N << " is: " << fibonacci(N) << endl;
     return 0;
}

