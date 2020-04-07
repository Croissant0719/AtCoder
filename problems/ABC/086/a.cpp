#include<iostream>
using namespace std;
int main()
{
  int a, b, r;
  string text;

  cin >> a >> b;
  r =  a * b;
  if (r % 2 == 0) {
    text = "Even";
  } else {
    text = "Odd";
  }

  cout << text << endl;
  return 0;
}

// 解答例
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;
//     int c = a * b;
//     if (c % 2 == 0) cout << "Even" << endl;
//     else cout << "Odd" << endl;
// }
