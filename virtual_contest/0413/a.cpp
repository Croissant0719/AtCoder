#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int a, b; cin >> a >> b;
  string r;
  if (a*b%2 ==0) {
    r = "Even";
  } else {
    r = "Odd";
  }
  cout << r << endl;
  return 0;
}
