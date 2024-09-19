class Solution {
public:
vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
	int n = names.size();
	vector<int>v(n);
	vector<string>ret;
	for (int i = 0; i < n; i++)
	{
		v[i] = i;
	}
	sort(v.begin(), v.end(), [&](int x, int y)
	{
		return heights[x] > heights[y];
	});
	for (auto a : v)
	{
		ret.emplace_back(names[a]);
	}
	return ret;
}
};
