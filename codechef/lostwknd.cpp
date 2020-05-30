#include <iostream>
using namespace std;

int main() {

int n,p,i,a[5];
cin>> n;

while (n--){

	for(i=1;i<=5;i++){
		cin>>a[i];
	}
	
	cin>>p;
	a[0]=0;
	
	for(i=1;i<=5;i++){
		a[i]=(p*a[i])+a[i-1];
		//cout<<a[i]<<"\n";
	}

	if(a[5]>120){cout<<"YES\n";}
	else cout << "NO\n";
	}
	
return 0;
}
