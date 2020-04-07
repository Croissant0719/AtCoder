#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x[110];
  for (int i=0; i<n; i++) cin >> x[i];
  sort(x, x+n);
  long int res = 10000000000000;
  for (int i=x[0]; i<=x[n-1]; i++) {
    int sum = 0;
    for (int j=0; j<n; j++) {
       sum += pow(abs(i - x[j]), 2);
    }
    if (res > sum) res = sum;
  }
  cout <<  res << endl;
}
