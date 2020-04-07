#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int NCR(int n)
{
  if (n == 0) return 1;
  long res = 1;
  for (int i = 1; i <= n; ++i)
  {
    res *= i;
  }
  return res;
}

int main()
{
  int n, k;
  cin >> n >> k;
  long int sum = 0;
  long int a = NCR(n+k);
  long int b = NCR(n) * NCR(k);
  long int c = pow(10, 9) + 7;
  sum = a / b;
  cout << sum % c << endl;
}
