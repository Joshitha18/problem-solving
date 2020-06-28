#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;


void primeFactors(int n)  
{  
    // Print the number of 2s that divide n 
    int two=0; 
    while (n % 2 == 0)  
    {  
	two++;
        n = n/2; 
    }  

    int three=0; 
    while (n % 3 == 0)  
    {  
	three++;
        n = n/3;  

    }

	if(n != 1 || two>three) {cout<<"-1\n";}  
	else cout<<(three-two)+max(two,three)<<endl;
	 
 
}  



int main() {

int t, n;
cin>>t;
while(t--){
	cin>>n;
	if(n==1) cout<<"0\n";
    	else primeFactors(n);      
}

return 0;
}
