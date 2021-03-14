#include <iostream>
using namespace std;

int main(){
  int n,c,count=1,last=0;
  cin>>n>>c;
  cin>>last;
  n-=1;
  while(n--){
    int a;
    cin>>a;
    if(a-last <= c) count++;
    else count = 1;
    last = a;
  }
cout<<count;

  return 0;
}
