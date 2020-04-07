#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
  int  N, K;
  cin >> N >> K;
  long long result = K * pow(K-1, N-1);
  cout << result << endl;
  return 0;
}
