class Solution {
public:
int atoi(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        long long int ret = 0;
        vector<char> v;
        const char* start = str;
        int i = 0;
        int sign = 1;
        
        if(start[0] == '\0') {
        	return ret;
        }
        
        while(start[i] == ' ' && start[i] != '\0')
            i++;
            
        
        while (start[i] != '\0') {
            
            if(start[i] == '-' || start[i] == '+') {
    		if(start[i] == '-')
			sign = -1;
        		 i++;
		} 
    
		if(start[i] >= '0' && start[i] <= '9') {
			v.push_back(start[i]);	
		}
    		else {
			 break;   
    		}  
    		i++;
        }
        
        for(int i = 0; i < v.size(); i++) {
		ret += (v[i]-48)* pow(10, v.size()-i-1);	
        }
        
    	if(sign == -1) {
		ret *= sign;
		if(ret < INT_MIN) {
			ret = INT_MIN;
		}
    	}else {
		if(ret > INT_MAX ) {
			ret = INT_MAX;
		}
	}
        return ret;
    }
};
