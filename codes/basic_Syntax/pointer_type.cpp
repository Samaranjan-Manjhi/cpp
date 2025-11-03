#include <iostream>  
using namespace std;  
int main()   
{  
     int a = 100;  
     int* ptr = &a;  
     int** ptr1 = &ptr;
     int*** ptr2 = &ptr1;
     int**** ptr3 = &ptr2;
     int***** ptr4 = &ptr3;
     cout << "The value of is: " << a << endl;  
     cout << endl;   

     cout << "The value of is: " << a << endl;  
     cout << "The address of is: " << &a << endl;  
     cout << "The pointer ptr stores address: " << ptr << endl;  
     cout << "The value pointed by ptr: " << *ptr << endl;   
     cout << endl;   

     cout << "The value pointed by ptr1: " << &ptr << endl;   
     cout << "The value pointed by ptr2: " << ptr1 << endl;   
     cout << "The value pointed by ptr3: " << *ptr1 << endl;   
     cout << "The value pointed by ptr4: " << **ptr1 << endl;   
     cout << endl;   

     cout << "The value pointed by ptr4: " << &ptr1 << endl;   
     cout << "The value pointed by ptr5: " << ptr2 << endl;   
     cout << "The value pointed by ptr6: " << *ptr2 << endl;   
     cout << "The value pointed by ptr7: " << **ptr2 << endl;   
     cout << "The value pointed by ptr8: " << ***ptr2 << endl;   
     cout << endl;   

     cout << "The value pointed by ptr9: " << &ptr2 << endl;   
     cout << "The value pointed by ptr10: " << ptr3 << endl;   
     cout << "The value pointed by ptr11: " << *ptr3 << endl;   
     cout << "The value pointed by ptr12: " << **ptr3 << endl;   
     cout << "The value pointed by ptr13: " << ***ptr3 << endl;   
     cout << "The value pointed by ptr14: " << ****ptr3 << endl;   
     cout << endl;   

     cout << "The value pointed by ptr15: " << &ptr3 << endl;   
     cout << "The value pointed by ptr16: " << ptr4 << endl;   
     cout << "The value pointed by ptr17: " << *ptr4 << endl;   
     cout << "The value pointed by ptr18: " << **ptr4 << endl;   
     cout << "The value pointed by ptr19: " << ***ptr4 << endl;   
     cout << "The value pointed by ptr20: " << ****ptr4 << endl;   
     cout << "The value pointed by ptr21: " << *****ptr4 << endl;   

     return 0;  
}  
