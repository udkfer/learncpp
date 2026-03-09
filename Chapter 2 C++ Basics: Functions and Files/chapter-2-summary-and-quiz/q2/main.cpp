// Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:

#include <iostream>
#include "io.cpp"

// A main() function should be used to glue the above functions together.
int main()
{
  std::cout << "Enter the first number for the sum: " << '\n';
  int num1 {  readNumber() };

  std::cout << "Enter the last number: " << '\n';
  int num2 {  readNumber() };

  writeAnswer(num1 + num2);

  return 0;
}
