class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l=0,r=height.size()-1,area;
                
        area=(r-l)*(min(height[l],height[r]));
        
        while(l<r){
            
            if(height[l]>height[r]){r--;}
            else {l++;}
            
            area=max(area,(r-l)*(min(height[l],height[r])));
        }    
        
        return area;
    }
};
