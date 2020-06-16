#include <iostream>
using namespace std;

int main() {
int t,n,i,j,b,a;
cin>>t;
	while(t--){a=1;
	cin>>n;
	
	if(n%2 !=0){
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){cout<<a<<" ";a++;}
		cout<<"\n";
		}
	}
	
	if(n%2==0){b=n*n;
		
	for(i=1;i<=n;i++){
		if(i==1){
			for(j=1;j<=n;j++){cout<<a<<" ";a++;}
			}
		if((i%2 !=0) && i>1){
			for(j=1;j<=n;j++){cout<<a<<" ";a++;b--;}
			}
		if(i%2 ==0){
			for(j=1;j<=n;j++){cout<<b<<" ";a++;b--;}
			}
		
		cout<<"\n";
		}
	}
	
	}
return 0;
}
			
