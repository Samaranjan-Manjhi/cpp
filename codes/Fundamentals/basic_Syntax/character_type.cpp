#include <iostream>  
using namespace std;

int main()   
{  
     char ch = 'C';    
     char d = '7';  
     char s = '$';  
     cout << "Character: " << ch << endl;  
     cout << "Digit: " << d << endl;  
     cout << "Symbol: " << s << endl;  
     // Displaying ASCII values  
     cout << "Size of char: " << sizeof(ch) << endl;
     cout << "The ASCII of " << ch << " is " << int(ch) << endl;  
     cout << "The ASCII of " << d << " is " << int(d) << endl;  
     cout << "The ASCII of " << s << " is " << int(s) << endl;  
     return 0;  
}  
