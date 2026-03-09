#include <iostream>

int inputInteger()
{
  int input{};
  std::cin >> input;
  return input;
}

int doubleNumber(int x)
{
  return x * 2;
}

int main()
{
  std::cout << "Enter an Integer: " << '\n';
  int n{doubleNumber(inputInteger())};
  std::cout << "The double is: " << n << '\n';

  return 0;
}
