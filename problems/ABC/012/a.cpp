#include <iostream>
using namespace std;

int main(){
  string day; cin >> day;
  int d;
  if (day == "Sunday") {
    d = 0;
  }
  else if (day == "Monday") {
    d = 1;
  }
  else if (day == "Tuesday") {
    d = 2;
  }
  else if (day == "Wednesday") {
    d = 3;
  }
  else if (day == "Thursday") {
    d = 4;
  }
  else if (day == "Friday") {
    d = 5;
  }
  else if (day == "Saturday") {
    d = 6;
  }

  int r;
  if(d == 0 || d == 6) {
    r = 0;
  } else {
    r = 6 - d;
  }
  cout << r << endl;
  return 0;
}
