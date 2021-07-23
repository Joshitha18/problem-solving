#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;


//O(nlogn)
vector<int> pairSum_nlogn(vector<int> arr,int Sum){

sort(arr.begin(), arr.end());
vector <int> result;
int j=0;
int k=arr.size()-1;

while(j<k){
	if (arr[j]+arr[k]==Sum){
		result.push_back(arr[j]);
        result.push_back(arr[k]);
        return result;
	}
	else if (arr[j]+arr[k]>Sum) k--;
	else j++;
}
return result;
}

//O(n)
vector<int> pairSum(vector<int> arr,int Sum){

unordered_set<int>s;
vector <int> result;

for (int x:arr){
    int diff = Sum - x;
    if(s.find(diff)!=s.end()){
        result.push_back(x);
        result.push_back(diff);
        return result;
    }
    s.insert(x);
}
return result;
}

int main(){

	vector<int> arr{10, 5, 2 , 3, -6, 9 , 11};
	int S = 4;

	cout<<"O(nlogn)\n";
	auto p = pairSum_nlogn(arr,S);
	if(p.size()==0){
		cout<<"No such pair";
	}
	else{
		cout<<p[0]<<","<<p[1]<<endl;
	}

	cout<<"O(n)\n";
	p = pairSum(arr,S);
	if(p.size()==0){
		cout<<"No such pair";
	}
	else{
		cout<<p[0]<<","<<p[1]<<endl;
	}

	return 0;
}