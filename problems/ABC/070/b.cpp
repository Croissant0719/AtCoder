#include <iostream>
using namespace std;

int main() {
  int  A, B, C, D;
  cin >> A >> B >> C >> D;

  int start, end;
  if (A < C) {
    start = C;
  } else {
    start = A;
  }

  if (B < D) {
    end = B;
  } else {
    end = D;
  }

  int result = end - start;
  if (result < 0) result = 0;
  cout << result << endl;
  return 0;
}
