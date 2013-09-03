class Solution {
public:
       string intToRoman(int num) {
        	// Start typing your C/C++ solution below
        	// DO NOT write int main() function  
        
       		int n[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        	string r[] = {"M", "CM", "D", "CD", "C", "XC", "L","XL","X", "IX","V", "IV", "I"};
        	
        	string ret("");
        	
        	for(int i = 0; i < 13 && num > 0; i++) {
        		int k = num/n[i];
        		num -= k*n[i];
        		for(; k > 0; k--) {
        			ret.append(r[i]);
        		}
        	}	
        	return ret;
    	}
};