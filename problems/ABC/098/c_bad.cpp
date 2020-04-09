#include <iostream>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int sumStringFromIToN(string s, char str, int I, int N) {
  int all_sum = 0;
  rep(i, N) {
    if (s[i] == str) {
      all_sum++;
    }
  }
  int part_sum = 0;
  rep(i, I) {
    if (s[i] == str) {
      part_sum++;
    }
  }
  return all_sum - part_sum;
}

int main() {
  int N;
  string S;
  cin >> N >> S;

  int result = 300000;
  rep(i, N) {
    int sum = 0;
    if (i == 0) sum = sumStringFromIToN(S, 'E', 1, N);
    else sum = sumStringFromIToN(S, 'W', 0, i-1) + sumStringFromIToN(S, 'E', i+1, N);
    if (sum < result) result = sum;
  }
  cout << result << endl;
  return 0;
}
