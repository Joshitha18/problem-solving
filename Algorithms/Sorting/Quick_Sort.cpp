//inplace
#include <iostream>
using namespace std;

//nlogn average
//n^2 worst case

//procedure:
/*
choose pivot
Divide
 <=pivot
 >pivot
Recursevely sort two sub arrays
*/

int partition(int a[],int start,int end) {
//inplace
	int i= start-1;
	int j= start;
	int pivot=a[end];
	
	for( ;j<end;j++){
		if(a[j]<pivot) {
		//merge the smaller element in region1
		i+=1;
		swap(a[i],a[j]);
		}	
	}
	//place pivot in correct position
	swap(a[i+1],a[end]);
	return i+1;
}


void Quick_Sort(int a[],int start, int end){
	//base case
	if(start>=end) return;
	//recursive case
	int pivot=partition(a,start,end);
	//recursely sort left and right
	Quick_Sort(a,start,pivot-1);
	Quick_Sort(a,pivot+1,end);
}



int main() {

int i,n;
cin>>n;
int a[n];

for(i=0;i<n;i++){
	cin>>a[i];
}

Quick_Sort(a,0,n-1);

for(i=0;i<n;i++){
	cout<<a[i]<<" ";
}
cout<<"\n";

return 0;
}
