#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int n=5,a, x,y;
  for (int i=1;i<6;i++){
    for (int j=1;j<6;j++){
    cin>>a;
    if(a==1) {x=i;y=j;break;}
    }
  }
  cout<< abs(x-3)+abs(y-3)<<endl;

  return 0;
}
