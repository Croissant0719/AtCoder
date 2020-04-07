#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  string a[55][55];
  for (int i=0; i<H; i++) {
    string str;
    cin >> str;
    for (int j=0; j<W; j++) {
      a[i][j] = str[j];
    }
  }

  const int dx[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };
  const int dy[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };

  string b[55][55];
  for (int i=0; i<H; i++) {
    for (int j=0; j<W; j++) {
      if (a[i][j] == "#") {
        b[i][j] = a[i][j];
        continue;
      } else {
        int num = 0;
          for (int d = 0; d < 8; ++ d) {
            const int ni = i + dy[d];
            const int nj = j + dx[d];
            if (ni < 0 or H <= ni) continue;
            if (nj < 0 or W <= nj) continue;
            if (a[ni][nj] == "#") num++;
          }
          b[i][j] = char(num + '0');
      }
    }
  }
  for (int i=0; i<H; i++) {
    stringstream ss;
    for (int j=0; j<W; j++) {
      ss << b[i][j];
    }
    cout << ss.str() << endl;
  }
  return 0;
}
