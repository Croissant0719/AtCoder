#include <iostream>
#include <array>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n]; for (int i=0; i<n; i++) cin >> a[i];
  string res = "";
  for (int i=0; i<200000; i++) {
    for (int j=i+1; j<n; j++) {
      if (a[i] == a[j]) {
        res = "NO";
        break;
      }
    }
    if (res == "NO") break;
    if (i+1 == n) {
      res = "YES";
      break;
    };
  }
  cout << res << endl;
}
