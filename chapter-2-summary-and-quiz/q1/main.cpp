// Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:

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
