#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W; cin >> H >> W;
  vector<string> a(H);
  rep(i, H) cin >> a.at(i);
  rep(i, H) a.at(i) = '#' + a.at(i) + '#';

  string frame;
  rep(i, W+2) frame += '#';

  cout << frame << endl;
  rep(i, H) {
    cout << a.at(i) << endl;
  }
  cout << frame << endl;
  return 0;
}
