#include <iostream>
#include <string.h>

using namespace std;

int main() {
long long t,i,j,count,f=0;
cin>>t;
	while(t--){count=0;
	string xy;
	cin>>xy;
		
	j=strlen(xy.c_str());
//cout<<j<<"\n";
	long long a[j];
	for(i=0;i<j;i++){a[i]=0;}
	
	for(i=0;i<(j-1);i++){
		if(xy[i] != xy[i+1]  && a[i]==0){count++;a[i+1]=1;}
	}
	
cout<<count<<"\n";
}

return 0;
}
