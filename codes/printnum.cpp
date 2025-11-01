#include <iostream>
using namespace std;

void printSequence(int N) {
     int currentNumber = 1; // Start from number 1

     for (int i = 1; i <= N; i++) {  // For each row
          for (int j = 0; j < i; j++) {  // Print 'i' numbers in row 'i'
               cout << currentNumber << " ";

               // Update the current number
               currentNumber++;
               if (currentNumber > 9) {
                    currentNumber = 1;  // Restart from 1 after 9
               }
          }
          cout << endl;  // Move to the next line after each row
     }
}

int main() {
     int N;
     cout << "Enter the number of rows: ";
     cin >> N;

     printSequence(N);

     return 0;
}

