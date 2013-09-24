class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int size = s.length();
        if(size == 0)
        	return 0;
        	
        bool exist[256] = {false};
            
        int max_len = 0;
        int head = 0;
		
        
        for(int i = 0; i < size; i++) {
            if(exist[s[i]]) {
            	max_len = max(max_len, i - head);
                while(s[head] != s[i]) {
                	exist[s[head]] = false;
                	head++;
                }
                head++;
            }
            else {
            	exist[s[i]] = true;
            }
        }
        return max(max_len, size-head); 
    }
};
