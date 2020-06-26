//Printing Swastik
//n is odd and n>=5

#include <iostream>
using namespace std;

int main() {
	int n,i,j;
	cin>>n;
	
	//first component
	cout<<"*";
	for(i=1;i<n;i++){
		if(i<(n/2)) cout<<" ";
		else cout<<"*";
	}
	cout<<"\n";
	
	//second component
	for(i=0;i<(n-3)/2;i++){
		cout<<"*";
		for(j=1;j<n/2;j++){
			cout<<" ";
		}
		cout<<"*\n";
	}
	
	//third comp
	for(i=0;i<n;i++) cout<<"*";
	cout<<"\n";
	
	//fourth comp
	for(i=0;i<(n-3)/2;i++){
		for(j=0;j<n/2;j++){
			cout<<" ";
		}
		cout<<"*";
		for(j=1;j<n/2;j++){
			cout<<" ";
		}
		cout<<"*\n";
	}	
	
	//fifth comp
		for(j=0;j<n/2;j++){
			cout<<"*";
		}
		cout<<"*";
		for(j=1;j<n/2;j++){
			cout<<" ";
		}
		cout<<"*\n";	
	
return 0;
}
