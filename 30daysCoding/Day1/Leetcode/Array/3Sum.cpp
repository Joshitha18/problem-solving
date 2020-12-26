class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    int b=0;

for (int j = 0; j < nums.size(); j++) {

    if(j>0 && nums[j]==nums[j-1]){continue;}

	unordered_map<int, int> hash;
    int target=nums[j];

	for (int i = j+1; i < nums.size(); i++) {

        int Findnumber = - target - nums[i];

            //if numberToFind is found in map, return them
		if (hash.find(Findnumber) != hash.end()) {

             res.push_back(vector<int>());

            res[b].push_back(nums[j]);
			res[b].push_back(Findnumber);
			res[b].push_back(nums[i]);

            b++;
		}
            //number was not found. Put it in the map.
		hash[nums[i]] = i;
        }

     }

  return res;
    }
};
