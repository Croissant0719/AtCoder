#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<string> split(const string &s, char delim) {
    vector<string> elems;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
    if (!item.empty()) {
            elems.push_back(item);
        }
    }
    return elems;
}

int main(){
  string S; cin >> S;
  int num = 1;
  rep(i, S.size()) {
    if (S[i] == '+') {
      num++;
    }
  }

  vector<string> a(num);
  a = split(S, '+');
  int r = 0;
  rep(i, a.size()) {
    int n = a.at(i).size();
    if (n == 1) {
      if (a.at(i) == "0") continue;
      else {
        r++;
        continue;
      }
    } else {
      vector<int> b(n/2 + 1);
      rep(j, n) {
        if (j%2 == 0) {
          b[j/2] = a.at(i)[j] - '0';
        }
      }
      if (*min_element(b.begin(), b.end()) == 0) continue;
      else r++;
    }
  }
  cout << r << endl;
  return 0;
}
