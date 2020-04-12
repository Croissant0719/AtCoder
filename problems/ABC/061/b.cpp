#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M; cin >> N >> M;
  vector<int> city(N+1);

  rep(i, M) {
    rep(i, 2) {
      int num;
      cin >> num;
      city.at(num)++;
    }
  }

  rep(i, N) cout << city.at(i+1) << endl;
  return 0;
}
