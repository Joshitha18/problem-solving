#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <unordered_map>
using namespace std;



int main() {

long long int t,a,b,c,x,y;
cin>>t;
while(t--){
	cin>>a>>b>>c;
	
	if(a>=c){x=-1;y=b;}
	else if(a*b<=c){y=-1;x=1;}
	else {x=1;y=b;}
	
	cout<<x<<" "<<y<<endl;
	}

return 0;
}
