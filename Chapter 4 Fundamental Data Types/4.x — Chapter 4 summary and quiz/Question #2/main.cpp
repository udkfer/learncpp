#include <iostream>

int main()
{
  std::cout << "Enter a double value: ";
  double a{};
  std::cin >> a;

  std::cout << "Enter a double value: ";
  double b{};
  std::cin >> b;

  std::cout << "Enter +, -, *, or /: ";
  char x{};
  std::cin >> x;

  long long y{};

  switch(x)
  {
    case '+' :
      y = a + b;
      break;
    case '-' :
      y = a - b;
      break;
    case '*' :
      y = a * b;
      break;
    case '/' :
      y = a / b;
      break;
  }

  std::cout << a << ' ' << x << ' ' << b << " is " << y << '\n';

  return 0;
}
