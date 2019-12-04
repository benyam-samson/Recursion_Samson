//Benyam Samson, COSC 1437-58001, Teacher: Dr. Tyson McMillan
//Recursion: a problem solving method that consists of solving several smaller instances of the problem
#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;
void moveDiscs(int, int, int, int);
int factorialR(int);
int main() {
    const int num_discs = 3;  
    const int from_peg = 1;   
    const int to_peg = 3;     
    const int temp_peg = 2;
    int fact = 0;   
    moveDiscs(num_discs, from_peg, to_peg, temp_peg);
    cout << "All the pegs are moved!\n" << endl;
    cout << "Enter a positive integer to find its factorial: ";
    fact = validateInt(fact);
    cout << fact << "! = " << factorialR(fact) << endl;
    return 0;

}

void moveDiscs(int num, int fromPeg, int toPeg, int tempPeg) {
    if (num > 0) {
        moveDiscs(num - 1, fromPeg, tempPeg, toPeg);
        cout << "Move a disc from peg " << fromPeg << " to peg " << toPeg << endl;
        moveDiscs(num - 1, tempPeg, toPeg, fromPeg);
    }
}

int factorialR(int x) {
  if (x <= 1)
    return 1;
  else
    return x * factorialR(x-1);
}