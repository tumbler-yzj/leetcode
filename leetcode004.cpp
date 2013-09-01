<<<<<<< HEAD
class Solution {
public:
    string findPal(string &s, int left, int right)
    {
        if (left < 0)
            return s.substr(left+1, 1);
            
        if (right >= s.size())
            return s.substr(right-1, 1);
            
        while(0 <= left && right < s.size())
        {
            if (s[left] != s[right])
                break;
            left--;
            right++;
        }
        
        left++;
        right--;
        
        return s.substr(left, right - left + 1);        
    }
    
    string longestPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (s.size() == 0)
            return "";
            
        string ret;
        
        for(int i = 0; i < s.size(); i++)
        {
            string str = findPal(s, i - 1, i + 1);
            if (str.size() > ret.size())
                ret = str;
                
            str = findPal(s, i, i + 1);
            if (str.size() > ret.size())
                ret = str;
        }
        
        return ret;
=======
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        return addLists(l1, l2, 0);
    }
    
    ListNode* addLists(ListNode* list1, ListNode* list2, int carry) {
        if(list1 == NULL && list2 == NULL) {
            if(carry != 0) {
                ListNode* result = new ListNode(carry);
                return result;
            }
            else
                return NULL;  
        }
        
	    ListNode* result = new ListNode(carry);

	    int value = carry;
	    if(list1 != NULL) {
		    value += list1->val;
    	}
	    if(list2 != NULL) {
		    value += list2->val;
	    }
	    result->val = value % 10;
	    ListNode* more = addLists(list1 == NULL ? NULL : list1->next,
								  list2 == NULL ? NULL : list2->next,
								  value >= 10 ? 1 : 0);
	    result->next = more;
	    return result;
>>>>>>> 957b762fdb2d375b95caf933931c3960ac8e8d50
    }
};