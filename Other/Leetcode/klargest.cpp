class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
int s=nums.size();
        
int max= *max_element(nums.begin() ,nums.end())+1;
        //cout<<max;
int min= *min_element(nums.begin() ,nums.end())-1;

 if(min<0){min=-min;}
        
vector <int> a(10000,0);
vector <int> b(10000,0);

for(int i=0;i<s;i++){
	if(nums[i]>=0){a[nums[i]]+=1;}
	else if(nums[i]<0){nums[i]= -nums[i];b[nums[i]]+=1;}
}

int count=0;
   int i,index;     
        
for(i=max;i>=0;i--){
count=count+a[i];
if(count>=k) {index=i;break;}
}

i=1;

while(count<k){
count=count+b[i];
if(count>=k) {index=-i;break;}
i++;
}      
     return index;   
    }
};

