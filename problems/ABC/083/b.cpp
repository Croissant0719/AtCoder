#include <iostream>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int res;
  for (int i=0;i<=n;i++) {
    int x;
    x = i/10000%10 + i/1000%10 + i/100%10 + i/10%10 + i%10;
    if(a<=x && x<=b) {
      res += i;
    }
  }
  cout << res << endl;
}

// 解答例
// #include <iostream>
// using namespace std;

// int findSumOfDigits(int n) {
//   int sum = 0;
//   while(n > 0) {
//     sum += n%10;
//     n /= 10;
//   }
//   return sum;
// }

// int main() {
//   int n, a, b;
//   cin >> n >> a >> b;

//   int res;
//   for (int i=0;i<=n;i++) {
//     int x;
//     x = findSumOfDigits(i);
//     if(a<=x && x<=b) {
//       res += i;
//     }
//   }
//   cout << res << endl;
// }
