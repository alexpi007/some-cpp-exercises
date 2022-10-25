#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char const *argv[])
{
  int base;
  double result = 1;
  int exponent;

  cout << "\n";
  cout << "█▓▒▒░░░ Power calculator ░░░▒▒▓█\n";
  cout << "\n";
  cout << "Enter <base> and <exponent>:  ";
  
  cin >> base >> exponent;
  
  cout << base << "^" << exponent << " = ";

  for (int i = 0; i < exponent; i++)
  {
    // multiplication assignment operator
    result *= base;
  }

  cout << result;
  
  return 0;
}



