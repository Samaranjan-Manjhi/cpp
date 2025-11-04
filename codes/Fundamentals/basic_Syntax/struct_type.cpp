#include <iostream>
#include <stdio.h>

using namespace std;

struct data {
     int age;
     string name;
     string work;
};

void output(const data& d, int& ag, string& na, string& wo)
{
     ag = d.age;
     na = d.name;
     wo = d.work;
}

int main(int argc, char* argv[])
{
     int a;
     cout << "Enter age: ";
     cin >> a;
     cin.ignore();
     string st;
     cout << "Enter Name: ";
     getline(cin, st);
     string st1;
     cout << "Enter Profession: ";
     getline(cin, st1);
     data dta = {a, st, st1};
     int x;
     string y, z;
     cout << endl;
     output(dta, x, y, z); 
     {
          cout << "Full Name: " << y << endl;
          cout << "Age of " << y << " : " << x << endl;
          cout << "Profession of " << y << " is: " << z << endl;
     }
     return 0;
}
