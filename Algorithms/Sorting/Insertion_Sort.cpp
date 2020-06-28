#include <iostream>
using namespace std;

void Insertion_Sort(int a[],int n) {

	for(int i=1;i<n;i++){
	int current=a[i];
	//place current element in right position
		int j=i-1;
		while(j>=0 and a[j]>current){
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=current;
	}

}


int main() {

int i,n;
cin>>n;
int a[n];

for(i=0;i<n;i++){
	cin>>a[i];
}

Insertion_Sort(a,n);

for(i=0;i<n;i++){
	cout<<a[i]<<" ";
}
cout<<"\n";

return 0;
}
