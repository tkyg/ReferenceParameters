/*
Write a complete C++ program that does the following:
o Prompts the user for a number with at least three digits.
o If the user enters an invalid number, say "Goodbye" and end the program.
o Includes a function called parityCheck that takes as input the user's
number and does the following:
§ If the digits of the user's number are all odd, prints "All odd."
§ If the digits of the user's number are all even, prints "All even."
§ If the digits of the user's number are not all odd or all even, prints
"Mixed parity."
*/

#include <iostream>
using namespace std;

void parityCheck(int num)
{
  int allEven = 0;
  int allOdd = 0;

  while (num > 0)
  {
    int checkNum = num % 10;
    if (checkNum % 2 == 0)
    {
      allEven++;
    }
    else
    {
      allOdd++;
    }
    num /= 10;
  }

  if (allEven > 0 && allOdd == 0)
  {
    cout << "All Even";
  }
  else if (allOdd > 0 && allEven == 0)
  {
    cout << "All Odd";
  }
  else
  {
    cout << "Mixed Parity";
  }
};

int main()
{
  int num;
  cout << "Enter a number with atleast three digits: " << endl;
  cin >> num;

  if (num >= 100)
  {
    parityCheck(num);
    cout << endl;
  }
  else
  {
    cout << "Goodbye" << endl;
  }

  return 0;
}
