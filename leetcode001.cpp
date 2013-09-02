class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> ret;
        
        map<int, vector<int> > mp;
        
        for (int i = 0; i < numbers.size(); i++) {
            //if(mp.find(numbers[i]) == mp.end()) {
                mp[numbers[i]].push_back(i);
            //}
        }
        
        for (int j = 0; j < numbers.size(); j++) {
            if(mp.find(target - numbers[j]) != mp.end()) {
                if(numbers[j] == target - numbers[j]) {
                    if(mp[numbers[j]].size() > 1) {
                        ret.push_back(j + 1);
                        ret.push_back(mp[numbers[j]][1] + 1);
                        break;
                    } 
                }
                else {
                    ret.push_back(j + 1);
                    ret.push_back(mp[target - numbers[j]][0] + 1);
                    break; 
                }
            }
        }
        
        return ret;
    }
};
