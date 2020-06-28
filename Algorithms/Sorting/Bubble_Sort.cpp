#include <iostream>
using namespace std;


void Bubble_Sort(int a[],int n) {
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
	}

}


int main() {

int i,n;
cin>>n;
int a[n];

for(i=0;i<n;i++){
	cin>>a[i];
}

Bubble_Sort(a,n);

for(i=0;i<n;i++){
	cout<<a[i]<<" ";
}
cout<<"\n";

return 0;
}
