#include <iostream>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int sumArray(int *ary , int num) {
  int sum = 0;
  rep(i, num+1) sum += ary[i];
  return sum;
}

int main() {
  int N, a1[110], a2[110];
  cin >> N;
  rep(i, N) cin >> a1[i];
  rep(i, N) cin >> a2[i];

  int result = 0;
  rep(i, N) {
    int sum = 0;
    sum = sumArray(a1, i) + (sumArray(a2, N-1) - sumArray(a2, i) + a2[i]);
    if (result < sum) result = sum;
  }

  cout << result << endl;
  return 0;
}
