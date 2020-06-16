#include <iostream>
using namespace std;

int main() {

int t,n,i,j,pocket,k=0,five,ten;
cin>>t;
	while(t--){pocket=0;five=0;ten=0;k=0;
		cin>>n;
		
		for(i=0;i<n;i++){
			cin>>j;
			if(j==5){pocket=pocket+j;five++;}
			else {
				if((j-5)>pocket){k=1;}
				else{
					if(j==10 && five==0){k=1;}
					else if((j==15 && five<2) && (j==15 && ten==0)){k=1;}
					else if(j==10 && five>=1){pocket=pocket+5;five--;ten++;}
					else if(j==15 && ten>=1) {pocket=pocket+5;ten=ten-1;}
					else if((j==15 && ten==0) && (j==15 && five>=2)){pocket=pocket+5;five=five-2;}
				}
			}
		}
	if(k==1){cout<<"NO"<<"\n";}
	else cout <<"YES"<<"\n";
		
	}

return 0;
}
