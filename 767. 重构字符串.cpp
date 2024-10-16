class Solution {
public:
string reorganizeString(string s) {
	unordered_map<char, int>map;
	int n = s.size();
	string ret(n,' ');
	int v[2] = { 0,0 };
	int i = 0;
	for (auto a : s)
	{
		if (v[1] < ++map[a])
		{
			v[1] = map[a];
			v[0] = a;
		}
	}
	if (v[1] > (n + 1) / 2)
	{
		return "";
	}
	for (i = 0;map[v[0]]--; i+=2)
	{
		ret[i] = v[0];
	}
	map.erase(v[0]);
	for (auto a : map)
	{
		for (int j = a.second; j; j--)
		{
			if (i >= n)
			{
				i = 1;
			}
			ret[i] = a.first;
			i += 2;
		}
	}
	return ret;
}
};
