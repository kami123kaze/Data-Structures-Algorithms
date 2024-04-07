#include <iostream>

int main(){

//* IF-ELSE STATEMENTS
//? An if else statement is a conditional statement that runs a different set of statements depending on whether an expression is true or false. 

int x = 100;
if(x<100) std:: cout << "smaller than 100";
else std:: cout << "Greater than 100";
//! "&&" is used for multiple conditions.
//! Else if statements are used to save time and complications.

//* Switch statemetnsd
//?  A switch statement is a type of selection control mechanism used to allow the value of a variable or expression to change the control flow of program execution via search and map.

 char a = 'A';
 
    // switch statements
    switch (x) {
    case 'A':
      std::  cout << "Choice is A";
        break;
    case 'B':
      std::  cout << "Choice is B";
        break;
    case 'C':
      std::  cout << "Choice is C";
        break;
    default:
      std::  cout << "Choice other than A, B and C";
        break;
    }
    return 0;


//* FOR LOOPS
//? In C++, for loop is an entry-controlled loop that is used to execute a block of code repeatedly for the specified range of values.

for(int i=0;i<2;i++) std::cout << "This will run thrice" << std:: endl;


//* WHILE LOOPS
//? While Loop in C++ is used in situations where we do not know the exact number of iterations of the loop beforehand. The loop execution is terminated on the basis of the test condition.

int i;
std:: cout << "How many times should the loop run";
std:: cin >> i;
while(i--)std:: cout << "The loop runs " << i << "times";


//* DO-WHILE LOOPS
//? In the do-while loop, the loop body will execute at least once irrespective of the test condition. 
 int z = 2; 
  
    do {    
  // Loop body 
      std::  cout << "Hello World\n"; 
  // Update expression 
        i++;
    } 
  // Test expression 
    while (i < 1); 
  
    return 0; 
}
