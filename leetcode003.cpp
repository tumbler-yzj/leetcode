class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        const int MAX = 256;
    	int len = 0;
        
        int tag = 0;
        
        int mp[MAX];
        for(int i = 0; i < MAX; i++)
        	mp[i] = -1;
        
        int size = str.size();
        
        if(size == 0)
            return 0;
        
        for (int i = 0; i < size; i++) {
			if(mp[str[i]] > -1) {
				len = max(i-tag, len);
				tag = mp[str[i]] + 1;
				mp[str[i]] = i;
			}
			else {
				mp[str[i]] = i;		
			}	
		}
		return max(size-tag, len);
        
        /*
        int len = 0;
        
        int tag = 0;
        
        int size = str.size();
        
        map<int, char> mp;
        
        if(size == 0)
            return 0;
    
        for (int i = 0; i < size; i++) {
        	if(mp.find(str[i]) == mp.end()) {
    		    mp[str[i]] = i;
			}
            else {
                if(mp[str[i]] >= tag) {
                    len = max(i-tag,len);
                    tag = mp[str[i]] + 1;
                }	
                mp[str[i]] = i;
            }
		}
		return max(size-tag, len);	*/
    }
};
