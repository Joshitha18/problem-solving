#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


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

	auto p = pairSum(arr,S);
	if(p.size()==0){
		cout<<"No such pair";
	}
	else{
		cout<<p[0]<<","<<p[1]<<endl;
	}

	return 0;
}