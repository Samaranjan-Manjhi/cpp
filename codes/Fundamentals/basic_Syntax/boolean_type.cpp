#include <iostream>  
using namespace std;  

int main()   
{  
     bool isLoggedIn = true;  
     bool hasAccess = false;  
     cout << "User logged in: " << isLoggedIn << endl;  
     cout << "User has access: " << hasAccess << endl;  
     if (isLoggedIn && hasAccess)   
     {  
          cout << "Access granted!" << endl;  
     }  
     else  
     {  
          cout << "Access denied!" << endl;  
     }  
     return 0;  
}  
