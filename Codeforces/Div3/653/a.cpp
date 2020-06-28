#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {

int t,x,y,n;
cin>>t;
while(t--){
	cin>>x>>y>>n;
	int r=n%x;	
	if(n<x) cout<<y<<endl;
	else if (r-y == 0) cout<<n<<endl;
	else if (y-r >0) cout<<(n+(y-r)-x)<<endl;
	else cout<<(n-(r-y))<<endl;
}

return 0;
}
