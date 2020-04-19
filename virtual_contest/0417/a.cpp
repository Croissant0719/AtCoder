// #include <iostream>
// #include <vector>
// using namespace std;

// #define rep(i, n) for (int i = 0; i < (int)(n); i++)

// int main() {
//   string s;
//   cin >> s;

//   int count = 0;
//   int stop = 0;
//   rep(i, 12) {
//     if (i % 2 == 1) {
//       if (s.at(i) == 'B') {
//         ++count;
//       } else if (s.at(i) == 'W') {
//         stop = i;
//         break;
//       }
//     }
//   }
//   string res;
//   if (count == 2 && stop == 5) {
//     if (s[11] == 'W') res = "Do";
//     else res = "So";
//   } else if (count == 1 && stop == 3) {
//     if (s[9] == 'W') res = "Re";
//     else res = "La";
//   } else if (count == 0 && stop == 1) {
//     if (s[7] == 'W') res = "Mi";
//     else res = "Si";
//   } else {
//     res = "Fa";
//   }
//   cout << res << endl;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string sortString(string &str) {
  sort(str.begin(), str.end());
  return str;
}

int main() {
  string s;
  cin >> s;
  string str;
  str = sortString(s);

  int count = 1;
  rep(i, str.size()) {
    if (i+1 == str.size()) break;
    char c1 = str[i];
    if (str[i+1] == c1) {
      ++count;
    }
  }

  int res;
  if (res == str.size()) res = 0;
  else {
    res = str.size() - count;
    if (res % 2 != 0) res = res/2 + 1;
    else res = res/2;
  }
  cout << res << endl;
}
