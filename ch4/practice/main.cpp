#include <iostream>

int main()
{
  std::cout << "Enter a single character: ";
  char ch {};
  std::cin >> ch;

  int ascii {ch};
  std::cout << "You entered" << "'" << ch << "'" << " which has an ASCII code "<< ascii;

  return 0;
}