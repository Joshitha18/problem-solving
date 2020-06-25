//Given a collection of intervals, merge all overlapping intervals.

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<2) return intervals;
      
        vector<vector<int>>result;
        
        sort(intervals.begin(),intervals.end());
        result.push_back(intervals[0]);
        
        for(int i=1;i<intervals.size();i++){
            
            if(intervals[i][0]<=result.back().back())
            {
               result.back().back()=max(result.back().back(),intervals[i][1]); 
            }
            else
            {
               result.push_back(intervals[i]); 
            }
        }
        
        return result;
    }
};
