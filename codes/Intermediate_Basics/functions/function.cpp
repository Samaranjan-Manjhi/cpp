#include <iostream>
#include <stdio.h>

using namespace std;

int maxValue(int x, int y);

int main(int argc, char* argv[])
{
     int a = 10, b = 99;
     if(argc > 1)
     {
          if(argv[1][0] != '\0')
               a = atoi(argv[1]);

          if(argc > 2 && argv[2][0] != '\0')
               b = atoi(argv[2]);
     }
     int res = maxValue(a, b);
     cout << "Larger Number is: " << res << " between " << a << " & " << b << endl; 
     return 0;
}

int maxValue(int x, int y)
{
     return (x > y) ? x : y;
}
