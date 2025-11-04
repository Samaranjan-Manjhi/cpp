#include <iostream>
#include <stdio.h>

using namespace std;

class Dog 
{
     private:
          string breed;
     public:
          Dog (string brd)
          {
               breed = brd;
          }
          void showBreed ()
          {
               cout << "Dog Breed: " << breed << endl;
               if(breed == "Rotweller")
                    cout << "Very loyal to master, strong and heavy in weight.\n";
               else
                    cout << "Very loyal to master, friendly, troublesome as well as very annoying, strong and light in weight.\n";
          }
};

int main(int argc, char* argv[])
{
     //cin.ignore();
     string st;
     cout << "Enter dog breed: ";
     getline(cin, st);

     string st1;
     cout << "Enter another dog breed: ";
     getline(cin, st1);
     cout << endl;
     Dog dog1(st);
     Dog dog2(st1);
     dog1.showBreed();
     dog2.showBreed();
     return 0;
}


