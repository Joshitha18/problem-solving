#include <iostream>

using namespace std;

int main(){

int n,val;
cin>>n;

val=n-1;

for(int i=2;i<n;i++){
  if (n%i != 0){val += n/i;}
  else val += (n/i)-1;
}

cout<<val<<endl;

  return 0;
}
