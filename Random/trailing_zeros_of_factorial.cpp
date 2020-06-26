//number of trailing zeros of n!
//n<=10^9

#include <iostream>
#include <cmath>
using namespace std;

int main() {

int n,five=5,count=0;
cin>>n;

//number of occurances of 5= no.of trailing zeros
//power of 5 in 10!=floor(10/5)+floor(10/5*5)+...

while(floor(n/five)){
	count+=floor(n/five);
	five*=5;
}
cout<<count<<endl;

return 0;
}
