class Solution {
public:
    int romanToInt(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        map<char, int> mp;
        int n[] = {1000, 500, 100, 50, 10, 5, 1};
        string r = "MDCLXVI";
        int ret = 0;
        
        for(int i = 0; i < r.length(); i++) {
            mp[r[i]] = n[i];
        }
       
        for (int i = 0; i < s.length(); i++)
		{
			
			if(i+1 < s.length()) {
				if(mp[s[i]] < mp[s[i+1]]) {
					ret -= mp[s[i]];
				}
				else {
					ret += mp[s[i]];
				}
			} else {
				ret += mp[s[i]];	
			}
		}
		return ret;
        
    }
};