#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,i,te=0,to=0,match=0;
cin>>n;
int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		if((i%2)==(a[i]%2) && i%2==0){match++;}
		if((i%2)==(a[i]%2) && i%2==1){match++;}
		if((a[i]%2)==0){te++;}
		if((a[i]%2)==1){to++;}
		}
//even size
	if(n%2==0){
		if(to!=te){cout<<"-1\n";}
		else cout<<(n-match)/2<<endl;
		}
//odd size
	if(n%2==1){
		if(to!=(te-1)){cout<<"-1\n";}
		else cout<<(n-match)/2<<endl;
		}
	}
return 0;
}
