#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

int main() {

int t,n;
long double k;
cin>>t;
while(t--){
	cin>>k;
	n=int(k);
	
	while((ceil(k)==floor(k)) && k>2){
		k=k/2;
	}
	
	if(k==2 && n!=2){cout<<"FastestFinger\n";}
	else if(n==1){cout<<"FastestFinger\n";}
	else if(n==2){cout<<"Ashishgup\n";}
	else if(n%2==1){cout<<"Ashishgup\n";}
	else {
		if((n/2)%2==0){cout<<"Ashishgup\n";
		}
		else {
			n=n/2;
			//cout<<n<<endl;
			if(prime(n)){cout<<"FastestFinger\n";}
			else {cout<<"Ashishgup\n";}
		}
	
	}
	
	}

return 0;
}
