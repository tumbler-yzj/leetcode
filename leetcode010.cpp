class Solution{
	public:
		bool isMatch(const char* s, const char* p) {
			assert(s && p);
			if(*p == '\0')
				return *s == '\0';
			if(*(p+1) != '*') {
				assert(*p != '*');
				while(*p == *s || (*p == '.' && *s != '\0')) {
					return isMatch(s+1, p+1);
				}
			} else {
				while(*p == *s || (*p == '.' && *s != '\0')) {
					if(isMatch(s,p+2))
						return true;
					s++;
				}
				return isMatch(s,p+2);
			}
			
		}
};