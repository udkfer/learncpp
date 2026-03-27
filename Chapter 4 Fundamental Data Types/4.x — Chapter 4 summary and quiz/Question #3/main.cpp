#include <iostream>

double cbh(int th, int s)
{
  double bh{th - (9.8 * (s * s) / 2.0)};
  if (bh < 0.0)
    return 0.0;
  return bh;
}

void pbh(double bh, int s)
{
  if (bh > 0.0)
    std::cout << "At " << s << " seconds, the ball is at height: " << bh << " meters\n";
  else
    std::cout << "At " << s << " seconds, the ball is on the ground.\n";
}

void cpbh(double th, int s)
{
  double bh{ cbh(th, s) };
  pbh(bh, s);
}

int main()
{
  std::cout << "Enter the height of the tower in meters: ";
  int th{};
  std::cin >> th;

  cpbh(th, 0);
  cpbh(th, 1);
  cpbh(th, 2);
  cpbh(th, 3);
  cpbh(th, 4);
  cpbh(th, 5);

  return 0;
}
