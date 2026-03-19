#include <iostream>

int main()
{
  int x;
  std::cout << "Enter a number from 0 to 9: ";
  std::cin >> x;

  bool isPrime(x);
  {

    if (x == 2)
      x = 1;
    else if (x == 3)
      x = 1;
    else if (x == 5)
      x = 1;
    else if (x == 7)
      x = 1;
    else
      x = 0;
  }

  if ( x == 1 )
    std::cout << "The digit is prime" << '\n';
  else
    std::cout << "The digit is not prime" << '\n';

  return 0;
}
