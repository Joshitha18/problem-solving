#include <iostream>
using namespace std;

#define m 2147483647

char ch;
int ways[1001][1001];

int main(){
int n,i,j;
cin >> n;

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>ch;
			 if(ch=='#') {ways[i][j]=0;}
			  else if(ch=='.' && (i==1)){ways[i][j]=1;}
			  else ways[i][j]=-1;
		 }
	 }
	 
	 for(i=2;i<=n;i++){
		for(j=1;j<=n;j++){
			if(ways[i][j] == -1){
				ways[i][j]=(ways[i][j-1]%m + ways[i-1][j]%m)%m;}
		}
	}
	
	cout<<ways[n][n]<<endl;
	
return 0;
}

