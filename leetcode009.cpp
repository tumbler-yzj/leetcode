#include <iostream>
#include <cstdlib>

using namespace std;

class Solution{
	public:
		bool isPalindrome(int x) {
			if(x < 0)
				return false;
				
			int dev = 1;
			while (x/dev >= 10) {
				dev *= 10;
			}
			while(x) {
				int l = x / dev;
				int r = x % 10;
				if(l == r) {
					x = (x%dev)/10;
					dev /= 100;
				} else {
					return false;
				}
			}
			return true;
		}
};

int print(int num) {
	Solution s;
	bool result  = s.isPalindrome(num);
	cout << num;
	if(result)
		cout << " is a palindrome number."<< endl;
	else
		cout << " is not a palindrome number."<< endl;
}

int main() {
	
	print(-1);
	print(123);
	print(123321);
	print(12321);
	
	while(1);
	return 0;
}
