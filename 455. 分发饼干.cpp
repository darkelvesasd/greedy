class Solution {
public:
int findContentChildren(vector<int>& g, vector<int>& s) {
	int m = g.size();
	sort(g.begin(), g.end());
	sort(s.begin(), s.end());
	int left = 0;
	for (auto a : s)
	{
		if (g[left] <= a)
		{
			left++;
		}
		if (left >= m)
		{
			return left;
		}
	}
	return left;
}
};
