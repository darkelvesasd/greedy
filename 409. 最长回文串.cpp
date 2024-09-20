class Solution {
public:
int longestPalindrome(string s) {
	int hash[128];
	int n = s.size();
	int ret = 0;
	for (auto a : s)
	{
		hash[a]++;
	}
	for (auto a : hash)
	{
		ret += a / 2 * 2;
	}
	return ret < n ? ret + 1 : ret;
}
};
