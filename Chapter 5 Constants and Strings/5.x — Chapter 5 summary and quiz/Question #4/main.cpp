#include <iostream>
#include <string>

int main()
{
  std::cout << "Enter the name of person #1: ";
  std::string n{};
  std::getline(std::cin >> std::ws, n);

  std::cout << "Enter the age of " << n << ": ";
  int m{};
  std::cin >> m;

  std::cout << "Enter the name of person #2: ";
  std::string l{};
  std::getline(std::cin >> std::ws, l);

  std::cout << "Enter the age of " << l << ": ";
  int k{};
  std::cin >> k;

  if(m > k)
    std::cout << n << " (age " << m << ") " << "is older than " << l << " (age " << k << ").\n";
  else if(m < k)
    std::cout << l << " (age " << k << ") " << "is older than " << n << " (age " << m << ").\n";
  else
    std::cout << n << " (age " << m << ") " << "is the same as " << l << " (age " << k << ").\n";

  return 0;
}
