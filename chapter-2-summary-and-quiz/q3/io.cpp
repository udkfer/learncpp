// Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”.

#include "io.h"
#include <iostream>

// A function named “readNumber” should be used to get (and return) a single integer from the user.
int readNumber()
{
  int num;
  std::cin >> num;
  return num;
}

// A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
void writeAnswer(int num)
{
  std::cout << "The result is: " << num << '\n';
}
