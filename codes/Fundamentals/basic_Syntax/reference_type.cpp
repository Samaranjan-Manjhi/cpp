#include <iostream>  
using namespace std;  

int main()   
{  
    int num = 5;  
    int& ref = num;    
    cout << "Original value: " << num << endl;  
    ref = 10;  // Changing ref also changes num  
    cout << "Modified value: " << num << endl;  
    return 0;  
}
