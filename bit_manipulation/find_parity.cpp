/**
 * Problem : Determine parity of a number.
 * Parity refers to whether number contains odd or even number of set bits
 * Approach: We loop till number becomes zero and invert parity while unsetting
 * right most set bit.
 */

#include <iostream>

bool getparity( int num )
{
  bool parity = false;
  while( num ) {      //This loop will only run for # of set bits.
    parity = !parity;
    num = (num & (num - 1));
  }
  return parity;
}

int main()
{
  int num;
  std::cout << "Enter number:";
  std::cin >> num;
  std::cout << "Parity of num is "
            << (getparity(num) ?  "odd" : "even")
            << std::endl;
  return 0;
}
