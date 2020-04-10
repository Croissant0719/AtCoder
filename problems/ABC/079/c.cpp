#include <iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int CtoI(char str) {
  return int(str - '0');
}

int main() {
  string N; cin >> N;
  int A[4];
  rep(i, 4) A[i] = CtoI(N[i]);

  int op[4];
  int d[2] = { -1, 1 };
  int result = 0;
  rep(i, 2) {
    rep(j, 2) {
      rep(k, 2) {
        result = A[0] + A[1]*d[i] + A[2]*d[j] + A[3]*d[k];
        if (result == 7) {
          op[0] = 1, op[1] = i; op[2] = j; op[3] = k;
        };
      }
    }
  }

  rep(i,4) {
    if (0 <= A[i]*d[op[i]] & 0 < i) cout << "+" << A[i]*d[op[i]];
    else cout << A[i]*d[op[i]];
  };
  cout << "=7" << endl;
  return 0;
}
