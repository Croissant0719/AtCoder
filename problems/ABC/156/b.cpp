#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int count = 0;
  int res = n;
  for (int i=0; i<10000; i++) {
    ++count;
    res /= k;
    if (res == 0) break;
  }
  cout << count << endl;
}
