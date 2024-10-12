class Solution {
public:
int maxEnvelopes(vector<vector<int>>& envelopes) {
	sort(envelopes.begin(), envelopes.end(), [&](vector<int>a, vector<int>b)
	{
		return a[0] != b[0] ? a<b : a>b;
	});
	vector<int>v;
	for (auto a : envelopes)
	{
		int t = a[1];
		int n = v.size();
		if (n == 0 || t > v[n - 1])
		{
			v.emplace_back(a[1]);
		}
		else
		{
			int left = 0;
			int right = n - 1;
			while (left < right)
			{
				int mid = (left + right) / 2;
				if (v[mid] < t)
				{
					left=mid+1;
				}
				else
				{
					right=mid;
				}
			}
			v[left] = t;
		}
	}
	return v.size();
}
};
