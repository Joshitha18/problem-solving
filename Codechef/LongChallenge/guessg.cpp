#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
using namespace std;

int main() {
int n,x,a=1,b,i,j=0,begin,end;
char c,d;
cin>>n;

begin=1;end=n;

cout<<end<<endl;
cin>>c;
if(c=='E'){exit(0);}

cout<<end<<endl;
cin>>d;
	
if(d=='E'){exit(0);}

x=(begin+end)/2;
cout<<x<<endl;
cin>>c;

if(c=='E'){exit(0);}

while(c != 'E' && d !='E'){

	if(c=='G'){
		begin=x+1;
		if(begin>end){j=1;break;}	

		}
		
	if(c=='L'){
		end=x-1;
		if(end<begin){j=1;break;}	
		}
		
	cout<<x<<endl;
	cin>>d;
	
	if(d=='E'){break;}
//cout<<begin<<"  "<<end<<endl;
	x=(begin+end)/2;
	cout<<x<<endl;
	cin>>c;
	
	if((begin==end) && (c != 'E')){j=1;break;}
	}
	
if(j==1){
begin=1;end=n;

x=(begin+end)/2;

cout<<x<<endl;
cin>>d;

while(d !='E'){

	if(d=='G'){	
		begin=x+1;
		}
		
	if(d=='L'){	
		end=x-1;
		}
		
	cout<<x<<endl;
	cin>>c;

	x=(begin+end)/2;
	cout<<x<<endl;
	cin>>d;
	}
	
	}
	
return 0;
}
	

