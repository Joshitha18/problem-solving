#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
	int n,b,m,k=0,a,c;
	cin>>n>>b>>m;
	
	while(m--){
		cin>>a;
		if(k==0){c=a;k=1;}
		else {
			if((a/b)!=(c/b)){k++;}
			c=a;
		}	
	}
cout<<k<<endl;	
}

return 0;
}
