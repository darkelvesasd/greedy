class Solution {
public:
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
	sort(intervals.begin(), intervals.end());
	vector<vector<int>> ret;
	vector<int>t;
	t.emplace_back(intervals[0][0]);
	t.emplace_back(intervals[0][1]);
	int m = intervals.size();
	int i = 1;
	while (i < m)
	{
		if (intervals[i][0] <= t[1])
		{
			if (intervals[i][1] > t[1])
			{
				t[1] = intervals[i][1];
			}
		}
		else
		{
			ret.emplace_back(t);
			t[0] = intervals[i][0];
			t[1] = intervals[i][1];
		}
		i++;
	}ret.emplace_back(t);
	return  ret;
}
};
