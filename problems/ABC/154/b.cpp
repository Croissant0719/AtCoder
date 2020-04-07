#include <iostream>
using namespace std;

int main() {
  string a, res;
  cin >> a;
  for(int i=0; i<a.length(); i++) {
    res += 'x';
  }

  cout << res << endl;
}
