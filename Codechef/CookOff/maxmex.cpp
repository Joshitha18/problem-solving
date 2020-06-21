#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
	int n,m,i,k,flag=0,count=0,c=0;
	cin>>n>>m;
	k=n+1;
	int a;
	vector<int> b(m,0);
	
	for(i=1;i<k;i++){
	        cin>>a;
	        if(a<m){b[a]++;}
	        if(a==m){c++;}
	}
	b[0]=1;	
	sort(b.begin(),b.end());
	if(binary_search(b.begin(),b.end(),0)){count=-1;flag=1;}
	
		
	if(!flag){
		count=n-c;
		}
		
cout<<count<<endl;
}
return 0;
}
		
