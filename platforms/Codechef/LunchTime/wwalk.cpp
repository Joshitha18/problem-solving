#include <iostream>
using namespace std;

int main() {
long long t,n,i,p;
cin>>t;
while(t--){p=0;
	cin>> n;
	long long a[n+1],b[n+1],c[n+1],d[n+1];
	a[0]=b[0]=c[0]=d[0]=0;
	
	for(i=1;i<=n;i++){
		cin >>a[i];
		c[i]=a[i];
	}
		for(i=1;i<=n;i++){
		cin >>b[i];
		d[i]=b[i];
	}
	
	for(i=1;i<=n;i++){
		c[i]=c[i]+c[i-1];
		d[i]=d[i]+d[i-1];
			if(c[i]==d[i] && a[i]==b[i]){p=p+a[i];}
	}
	
	cout<<p<<"\n";
	}
return 0;
}
