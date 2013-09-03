class Solution {
public:
    int maxArea(vector<int> &height) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
    
        int l = 0;
        int r = height.size() - 1;
        
        int ret = 0;
        
        while(l < r) {
            ret = max(ret, min(height[l], height[r]) * (r - l));
            
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        
        return ret;
        
    }
};