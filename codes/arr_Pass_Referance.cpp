#include <iostream>
#include <stdio.h>
#include <array>

using namespace std;

template <size_t N>
void printData(int (&ar)[N])
{
     for(int i=0;i<N;i++)
     {
          cout << ar[i] << " ";
     }
     cout << endl;
}

int main(int argc, char* argv)
{
     int arr[5] = {1, 3, 5, 7, 9};
     printData(arr);

     return 0;
}

