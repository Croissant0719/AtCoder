#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N; cin >> N;
  vector<int> a(N+1);
  a.at(0) = 0;
  rep(i, N) cin >> a.at(i+1);

  int num = a.at(1);
  if (num == 2) {
    cout << 1 << endl;
    return 0;
  }
  else {
    rep(i, N) {
      if (a.at(num) == 2) {
        cout << i+2 << endl;
        return 0;
      }
      num = a.at(num);
    }
    cout << -1 << endl;
  }
  return 0;
}
