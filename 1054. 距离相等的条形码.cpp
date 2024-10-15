class Solution {
public:
vector<int> rearrangeBarcodes(vector<int>& barcodes) {
	int cnt = barcodes.size();
	unordered_map<int, int>map;
	vector<int>ret(cnt);
	int v[2] = {0,0};
	for (auto a : barcodes)
	{
		map[a]++;
		if (map[a] > v[1])
		{
			v[1] = map[a];
			v[0] = a;
		}
	}
	int i = 0;
	for (i = 0; map[v[0]]; i++)
	{
		ret[2*i] = v[0];
		map[v[0]]--;
	}
	map.erase(v[0]);
	for (auto a : map)
	{
		while (a.second-->0)
		{
			if (i < cnt/2)
			{
				ret[i*2] = a.first;
			}
			else
			{
				ret[(i - (cnt+1)/2) * 2 + 1] = a.first;
			}
			i++;
		}
	}
	return ret;
}
};
