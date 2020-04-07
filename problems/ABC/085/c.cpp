#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int N, Y, n = 0, y = 0;
  cin >> N >> Y;
  stringstream ss;
  string str;
  for (int i=0; i<=N; i++) {
    for (int j=0; j<=N-i; j++) {
      n = N - i - j;
      int sum = 10000*i + 5000*j + 1000*n;
      if (sum == Y) {
        ss << i << ' ' << j << ' ' << n;
        str = ss.str();
        goto OUT;
      } else {
        str = "-1 -1 -1";
      }
    }
  }
  OUT: cout << str << endl;
}
