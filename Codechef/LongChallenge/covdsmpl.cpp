#include <iostream>
using namespace std;

int main() {
int t,n,p,i,j,a[70][70],k,x,tot,all,c,b,row[70],f,l,m;
cin>>t;
	while(t--){tot=0;
		cin>>n>>p;
		
		//cout<<"1 "<<"1"<<" "<<"1"<<" "<<n<<" "<<n<<"\n";
		//cin>>all;
		
		row[0]=0;
		
		for(i=1;i<=n;i++){
		cout<<"1 "<<"1"<<" "<<"1"<<" "<<i<<" "<<n<<"\n";
		cin>>row[i];
			for (j=1;j<=n;j++){a[i][j]=0;}
		    }	
	all=row[n];	
	
		if(n%2==0){
			m=n/2+1;
		        }
		if(n%2!=0){
		    	m=(n+3)/2;
		        }
		
	//	m=n-1;        
		for(i=1;i<=n;i++){b=0;	l=1;
		
		cout<<"1 "<<i<<" "<<"1"<<" "<<i<<" "<<m<<"\n";
                cin>>f;
			    if(f==0){l=m+1;}
		
			for (j=l;j<n;j++){
				if(j !=m){
				cout<<"1 "<<i<<" "<<"1"<<" "<<i<<" "<<j<<"\n";
				cin>>k;
				}
				if(j==m){k=f;}
				if((k-b)==1){a[i][j]=1;tot++;b++;}
				if(b==(row[i]-row[i-1])){break;}
			}
			if(b != (row[i]-row[i-1])){a[i][n]=1;tot++;b++;}
			if(tot==all){goto next;}
		}
		
	next:
	
	cout<<"2"<<"\n";
	
	for(i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cin>>x;
	if(x==-1){exit(0);}
}
return 0;
}
