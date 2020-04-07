#include <iostream>
#include <string>
using namespace std;

int judge(int i) {
  int r;
  if(i == 1) return 1;
  else return 0;
}

int main() {
  string a; cin >> a;
  string s1, s2, s3;
  s1 = a[0]; s2 = a[1]; s3 = a[2];

  int r;
  r += judge(stoi(s1));
  r += judge(stoi(s2));
  r += judge(stoi(s3));
  cout << r << endl;
}

// 解答例
// int main() {
//     string s;
//     cin >> s;
//     int counter = 0;
//     if (s[0] == '1') ++counter;
//     if (s[1] == '1') ++counter;
//     if (s[2] == '1') ++counter;
//     cout << counter << endl;
// }
