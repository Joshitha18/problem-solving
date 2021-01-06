#include <iostream>
#include <cstring>
using namespace std;

int main() {
int t;
cin>>t;
	while(t--){
	string a;
	cin>>a;
	int l=a.length();
	
	if(l==2){cout<<a<<endl;}
	
	if(l>2){cout<<a[0];
	for(int i=1;i<l-1;i++){
	cout<<a[i];
	i++;}
	cout<<a[l-1]<<endl;
	}
	}
return 0;
}
