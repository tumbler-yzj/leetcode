class Solution {
public:
    int reverse(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool flag = true;
         long long int ret = 0;
        
        if(x < 0) {
            flag = false;
            x = -x;
        }
        vector<int> rev;
        while(x >= 10) {
            rev.push_back(x%10);
            x = x/10;
        }
        rev.push_back(x);
        int len = rev.size();
        for(int i = 0; i < len; i++) {
            ret += rev[i]*pow(10, len-i-1);
        }
        
        if(flag == false)
            return -ret;
        else
            return ret;
    }
};