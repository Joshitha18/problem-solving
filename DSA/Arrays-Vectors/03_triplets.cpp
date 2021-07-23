#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int> > triplets(vector<int> arr,int targetSum){

vector <vector<int>> result;
int n = arr.size();
sort(arr.begin(), arr.end());

for(int i=0;i<n-3;i++){
    int j= i+1;
    int k= n-1;

    //two pointer approach
    while(j<k){
        int curr_sum = arr[i];
        curr_sum += arr[j];
        curr_sum += arr[k];

        if(curr_sum==targetSum){
            result.push_back({arr[i],arr[j],arr[k]});
            j++;
            k--;
        }
        else if (curr_sum>targetSum) k--;
        else j++;
    }
}

return result;

}

int main(){

	vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
	int S = 18;

	auto result = triplets(arr,S);

	for(auto v : result){
		for(auto no : v){
			cout<<no<<",";
		}
		cout<<endl;
	}


	return 0;
}