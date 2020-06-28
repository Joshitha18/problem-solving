#include <iostream>
using namespace std;

void Selection_Sort(int a[],int n) {
	
	for(int i=0;i<n-1;i++){
		//find smallest element in unsorted part
		int min_index=i;
		for(int j=i;j<n;j++){
			if(a[j]<a[min_index]) min_index=j;
		}
		//swap
		swap(a[i],a[min_index]);
	}

}


int main() {
int i,n;
cin>>n;
int a[n];

for(i=0;i<n;i++){
	cin>>a[i];
}

Selection_Sort(a,n);

for(i=0;i<n;i++){
	cout<<a[i]<<" ";
}
cout<<"\n";

return 0;
}

