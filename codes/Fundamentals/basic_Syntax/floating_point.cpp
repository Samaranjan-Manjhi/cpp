#include <iostream>  
#include <iomanip>   
using namespace std;

int main()    
{  
     float f_1 = 3.1415926535f;       
     double d_2 = 3.1415926535;       
     long double ld_3 = 3.141592653589793238L;    
     cout << fixed << setprecision(10);    
     cout << "The float value is: " << f_1 << "   " << sizeof(f_1) << endl;  
     cout << "The double value is: " << d_2 << "   " << sizeof(d_2)<< endl;  
     cout << "The long double value is: " << ld_3 << "   " << sizeof(ld_3)<< endl;  
     return 0;  
}   
