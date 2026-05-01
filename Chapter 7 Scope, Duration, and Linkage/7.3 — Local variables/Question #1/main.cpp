#include <iostream>

int main()
{ // block starts here
  int smaller{}, larger{};
  std::cout << "Enter an integer: ";
  std::cin >> smaller;
  std::cout << "Enter a larger integer: ";
  std::cin >> larger;

  if(smaller > larger)
  { //block start here
    std::cout << "Swapping the values\n";

    int swap = smaller;
    smaller = larger;
    larger = swap;
  } //block ends here, swap dies here

  std::cout << "The smaller value is: " << smaller << '\n';
  std::cout << "The larger value is: " << larger << '\n';

  return 0;
} //block ends here, smaller and larger dies here
