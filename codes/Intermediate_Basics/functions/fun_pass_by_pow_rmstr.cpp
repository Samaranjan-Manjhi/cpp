//A C++ program to check whether a given is Armstrong or not  
#include <iostream>  
#include <cmath>  // For pow() function  
using namespace std;  
// Function to count the number of digits in a number  
int countDigits(int num) 
{  
     int count = 0;  
     while (num > 0) 
     {  
          count++;  
          num /= 10;  
     }  
     return count;  
}  

// Function to check if a number is Armstrong  
bool isArmstrong(int num) 
{  
     int originalNum = num;  
     int sum = 0;  
     int digits = countDigits(num);  
     while (num > 0) 
     {  
          int digit = num % 10;  
          sum += pow(digit, digits);  // to check for armstrong number
          //sum = sum * 10 + digit;   // to reverse a digit
          //sum += digit;   // to get sum of digit
          num /= 10;  
     }  
     //cout << "sum:- " << sum << endl;
     return (sum == originalNum);  
}  

int main() 
{  
     int num;  
     cout << "Enter a number: ";  
     cin >> num;  
     if (isArmstrong(num)) 
     {  
          cout << num << " is an Armstrong number." << endl;  
     } 
     else 
     {  
          cout << num << " is not an Armstrong number." << endl;  
     }  
     return 0;  
}  
