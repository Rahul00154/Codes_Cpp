#include <iostream>
using namespace std;
int main()
{
  int num1, num2, hcf = 1;
  cout << " Enter two Number " << endl;
  cin >> num1 >> num2;
  for (int i = 0; i <= num1 || i <= num2; i++)
  {
    if (num1 % i == 0 && num2 % i == 0)
      hcf = i;
  }
  cout << "Hcf of " << num1 << " and " << num2 << " = " << hcf;
}
