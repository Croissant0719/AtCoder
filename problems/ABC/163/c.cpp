#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for(int i=0; i<n-1; i++) cin >> a.at(i);

  vector<int> res(n);
  for(int i=0; i<n-1; i++){
    res.at(a.at(i)-1)++;
  }

  for(int i=0; i<n; i++){
    cout << res.at(i) << endl;
  }
  return 0;
}
