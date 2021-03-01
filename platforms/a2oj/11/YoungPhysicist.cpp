#include <iostream>
#include <vector>

using namespace std;

int main(){

  int n,x_cord, y_cord, z_cord,x=0,y=0,z=0;
  cin>>n;
  while(n--){
    cin>>x_cord>>y_cord>>z_cord;
    x += x_cord; y += y_cord; z += z_cord;
  }
  if (x==0 and y==0 and z==0) cout<<"YES\n";
  else cout<<"NO\n";

  return 0;
}
