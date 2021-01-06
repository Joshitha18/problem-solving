#include <iostream>
#include <algorithm>
using namespace std;




float median(int a[],int size_a,int b[],int size_b){

	if(size_a==0){
		if(size_b%2 !=0){cout<<b[size_b]/2<<endl;}
		else cout<<(b[size_b/2]+b[(size_b/2)-1])/2.0<<endl;
		}
	
	
	else if(size_a==1){
		if(size_b==1){cout<<(a[0]+b[0])/2.0<<endl;}
		
		else if(size_b>1 && size_b%2 !=0){
			int arr[]={a[0],b[(size_b/2)-1],b[size_b/2],b[(size_b/2)+1]};
			sort(arr,arr+4);
			cout<<(arr[1]+arr[2])/2.0<<endl;
			}
			
		else if(size_b>1 && size_b%2 ==0){
			int arr[]={a[0],b[(size_b/2)-1],b[size_b/2]};
			sort(arr,arr+3);
			cout<<arr[1]<<endl;
			}
		}
		
	else if(size_a==2){
		if(size_b==2){
			int arr[]={a[0],a[1],b[0],b[1]};
			sort(arr,arr+4);
			cout<<(arr[1]+arr[2])/2.0<<endl;
		}
		
		if(size_b%2 !=0){
			int arr[]={a[0],a[1],b[(size_b/2)-1],b[size_b/2],b[(size_b/2)+1]};
			sort(arr,arr+5);
			cout<<arr[2]<<endl;
		}
					
		if(size_b%2 ==0 && size_b>2){
			int arr[]={a[0],a[1],b[(size_b/2)-1],b[size_b/2],b[(size_b/2)+1],b[(size_b/2)-2]};
			sort(arr,arr+6);
			cout<<(arr[3]+arr[2])/2.0<<endl;
		}
	}
	
	else if(size_a >2){
	
	if(a[(size_a-1)/2] <= b[(size_b-1)/2]){

		return median(a+((size_a-1)/2),(size_a/2)+1,b,(size_b/2)+1);}
	else    return median(a,(size_a/2)+1,b+((size_b-1)/2,(size_b/2)+1,)); 
	}
		
}


int main() {

int a[1000],b[1000],size_a,size_b,i;

cin>>size_a>>size_b;

for(i=0;i<size_a;i++) {cin>>a[i];}
for(i=0;i<size_b;i++) {cin>>b[i];}

//passing smaller array first
if(size_a>size_b){
	median(b,size_b,a,size_a);}
else median(a,size_a,b,size_b);

return 0;
}
