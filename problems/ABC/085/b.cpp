#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  int a[110];
  for(int i=0; i<n; i++) {
    cin >> a[i];
  };

  int step = 1;
  sort(a, a+n);
  for(int i=0; i<n; i++) {
    if (i+1 == n) break;
    if (a[i] < a[i+1]) ++step;
  };

  cout << step << endl;
}
