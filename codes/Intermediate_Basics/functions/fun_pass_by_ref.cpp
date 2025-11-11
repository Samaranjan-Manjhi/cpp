#include<iostream>  
using namespace std;  

void square(int &num) 
{  
     num = num * num;  
}  

int main() 
{  
     int x = 5;  
     square(x);  
     cout << x << endl;  // Output: 25 (modified)  
     return 0;
}  
