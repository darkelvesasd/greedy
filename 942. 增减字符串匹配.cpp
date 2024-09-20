class Solution {
public:
vector<int> diStringMatch(string s) {
	int n = s.length();
	vector<int>ret(n + 1);
	int left = 0;
	int right = n;
	for (int i = 0; i < n; i++)
	{
		switch (s[i])
		{
		case 'I':
			ret[i] = left++;
			break;
		case 'D':
			ret[i] = right--;
			break;
		}
	}
	ret[n] = left;
	return ret;
}
};
