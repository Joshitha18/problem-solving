#include<iostream>
using namespace std;

int main(){
int n,i,j,count=0,k,size;
cin>>n>>k;
size=n;
int a[1000],b[1000];

for(i=0;i<1000;i++){a[i]=b[i]=0;}

while(n--){
	cin>>j;
	if(j>=0){a[j]++;}
	else if(j<0){j=-j;b[j]++;}
	}
	
n=size;	

for(i=n;i>=0;i--){
count=count+a[i];
if(count>=k) break;
}

i=1;

while(count<k){
count=count+b[i];
if(count>=k) break;
}

cout<<count<<endl;

return 0;
}
