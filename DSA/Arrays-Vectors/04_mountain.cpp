#include<iostream>
#include<vector>
using namespace std;


int highest_mountain(vector<int> a){

int n= a.size();
int largest = 0;

for(int i=1;i<n-1; ){

    if(a[i]>a[i-1] and a[i]>a[i+1]){
        int cnt = 1;
        int j = i;

        while(j>=1 and a[j]>a[j-1]) {j--;cnt++;}
        while(i<=n-2 and a[i]>a[i+1]) {i++;cnt++;}

        largest = max(largest,cnt);
    }
    else i++;
}

return largest;
}

int main(){

	vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

	cout<< highest_mountain(arr)<<endl;

	return 0;
}