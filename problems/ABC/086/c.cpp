#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N; cin >> N;
  const int inf = 110000;
  int t[inf], x[inf], y[inf];
  int count[inf];
  int move[inf];
  int sum[inf];

  int result = 0;

  cin >> t[0] >> x[0] >> y[0];
  count[0] = t[0];
  move[0] = x[0] + y[0];
  sum[0] = count[0] - move[0];
  if (sum[0]%2 == 0 && sum[0] >= 0) {
    result++;
  }

  for (int i=1; i<N; i++) {
    cin >> t[i] >> x[i] >> y[i];
    count[i] = t[i] - t[i-1];
    move[i] = x[i] + y[i] - move[i-1];
    sum[i] = count[i] - move[i];
    if (sum[i]%2 == 0 && sum[i] > 0) {
      result++;
    }
  }

  if (result == N) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
