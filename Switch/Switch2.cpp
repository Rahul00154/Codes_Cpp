#include <iostream>
using namespace std;
int main()
{
  char oper;
  float num1, num2;
  cout << "Enter an operator(+,-,*,/) : ";
  cin >> oper;
  cout << "Enter two numbers: " << endl;
  cin >> num1 >> num2;
  switch (oper)
  {
  case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    break;
  case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    break;
  case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    break;
  case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    break;
  default:
    cout << "operator is not found";
  }
  return 0;
}