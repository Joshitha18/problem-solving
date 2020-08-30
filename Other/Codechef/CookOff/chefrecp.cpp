#include <iostream>
using namespace std;

int main () {

int t,n,i,p,max;

cin >> t;

	while(t--) {p=0,max=0;
		
		cin >> n;
		
		int a[n+1],b[1000],c[1000],d[1000];
		
		for(i=1;i<=n;i++){
		
		 cin>> a[i]; 
		 
		 if(a[i]>max){max=a[i];}
		 
		 }
	a[0]=0;
		for(i=1;i<=1000;i++){b[i]=0;c[i]=0;d[i]=0;}
		
		for(i=1;i<=n;i++){
			
			b[a[i]]=b[a[i]]+1;
			
			if((a[i] != a[i-1]) && c[a[i]] == 0){c[a[i]]=1;}
			else if((a[i] != a[i-1]) && c[a[i]] == 1){p=1;}
			
			//d[b[a[i]]]=d[b[a[i]]]+1;
			
			//if(d[b[a[i]]] >1){p=1;}
		}
		
		for(i=1;i<=max;i++){
		
			if(b[i] != 0){d[b[i]]=d[b[i]]+1;}
			
			if(d[b[i]] >1){p=1;}
		}
	
	if(p==0) {cout << "YES\n";}
	else {cout << "NO\n";}
	
	}



return 0;
}
