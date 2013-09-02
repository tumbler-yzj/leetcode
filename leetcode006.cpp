class Solution {
public:
    string convert(string s, int nRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
        
        if(nRows == 1)
            return s;
        string ret("");
        int diff = nRows + nRows - 2;
        
        for(int i = 0; i < nRows; i++) {
            for (int j = i; j < s.size(); j += diff) {
                ret.append(1, s[j]);
                int k = j + diff - 2*i;
                if(i != 0 && i != nRows-1 && k < s.size())
                    ret.append(1, s[k]);
            }
        }
        return ret;
    }
};