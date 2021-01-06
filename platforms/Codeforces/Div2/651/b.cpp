#include <iostream>
using namespace std;

int main() {
int t,n;
cin>>t;
while(t--){
	cin>>n;
	int a[(2*n)+1],e=0,o=0,i,be[(2*n)+1],bi[(2*n)+1],co[(2*n)+1],ci[(2*n)+1],b=1,c=1;

	for(i=1;i<=(2*n);i++){
		cin>>a[i];
		if(a[i]%2==0){e++;be[b]=a[i];bi[b]=i;b++;}
		else {o++;co[c]=a[i];ci[c]=i;c++;}
	}
	
	if(e>0 && o>0){
		if(o%2==1){b=b-1;c=c-1;}
		else{
			if(o>1){c=c-2;}
			else b=b-2;
		}
		
		for(i=1;i<b;i++){
			cout<<bi[i]<<" "<<bi[i+1]<<endl;i++;
			}
			
		for(i=1;i<c;i++){
			cout<<ci[i]<<" "<<ci[i+1]<<endl;i++;
			}
	}
	
	if(e>0 && o==0){i=1;
		while(n-1){
			cout<<i<<" "<<i+1<<endl;
			i=i+2;n--;
		}
	}
	
	if(o>0 && e==0){i=1;
		while(n-1){
			cout<<i<<" "<<i+1<<endl;
			i=i+2;n--;
		}
	}
	
	}


return 0;
}
