#include <iostream>
using namespace std;

int main(){
  int n,d1,d2,val=0,doup=0;
  cin>>n;

  while(n--){
    cin>>d1>>d2;
    if(d1==d2) val++;
    else val=0;

    if(val==3) doup=1;
  }

  if(doup==1)cout<<"Yes\n";
  else cout<<"No\n";

  return 0;
}
