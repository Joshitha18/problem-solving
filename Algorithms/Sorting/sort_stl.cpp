#include <iostream>
#include <algorithm>
using namespace std;

//define comparator function for decreasing order
bool compare (int a, int b) {
	return a>b;
}


int main() {
int i,n;
cin>>n;
int a[n];

for(i=0;i<n;i++){
	cin>>a[i];
}

//sort in increasing order/decreasing according to comparator
//passing function as parameter
sort(a,a+n, compare);

for(i=0;i<n;i++){
	cout<<a[i]<<" ";
}
cout<<"\n";

return 0;
}
