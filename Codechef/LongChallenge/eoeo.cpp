#include <iostream>
#include <cmath>
using namespace std;

int main() {
long long t,ts,js,i,j;
cin>>t;
	while(t--){js=0;
		cin>>ts;
		j=ts;
		while(ts%2==0 && ts>0){ts=ts/2;js++;}
		
		i=pow(2,js+1);
		js=j/i;
		
		cout<<js<<"\n";
	}
return 0;
}
