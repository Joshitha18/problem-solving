#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int n,i,cumulative_sum=0,index,answer=0,b=1;
cin>>n;
int a[n];

for(i=0;i<n;i++){
	cin>>a[i];}
	
	sort(a,a+n);
	
for(i=n-1;i>=0;i--){
	cumulative_sum+=a[i];
	if(cumulative_sum<0){break;}
	index=i;
	}
	
for(i=index;i<n;i++){
	answer=answer+b*a[i];b++;
	}

cout<<answer<<endl;
return 0;
}
