#include <iostream>
using namespace std;
typedef long long ll;
ll n,i,a[100000],b,c;
int main(){
  cin>>n;
  for(;i<n;a[i]=c-1,i++)cin>>c;
  for(i=0;i<n;i++){
    if(b==1)return cout<<i,0;
    b=a[b];
  }
  cout<<-1;
}
