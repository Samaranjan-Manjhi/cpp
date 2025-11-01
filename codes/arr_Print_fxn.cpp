#include <iostream>
#include <stdio.h>
#include <array>

using namespace std;
template <size_t N>

void printArratData(const array<int, N>& arr)
{
     cout << "Printing Array Elements : " ;
     for(const auto& i : arr)
     {
          cout << i << " ";
     }
     cout << "\n";
}


int main(int argc, char* argv)
{
     array<int, 5> arr1 = {5, 10, 15, 20, 25};
     array<int, 10> arr2 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
     printArratData(arr1);
     printArratData(arr2);

     return 0;
}
