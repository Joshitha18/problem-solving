#include <iostream>
using namespace std;

int main() {

long long i,j,l,t,n,k;
cin>> t;

	while(t--){j=l=0;
		cin>>n>>k;

		long long p[n];
		
		for(i=0;i<n;i++){
			cin>>p[i];

			j=j+p[i];
			
			if(p[i]>k){l=l+k;}
			else l=l+p[i];	
			
		}
			
	j=j-l;
	cout<<j<<"\n";

	}

return 0;
}
