class Solution {
public:
int eraseOverlapIntervals(vector<vector<int>>& intervals) {
	sort(intervals.begin(), intervals.end());
	int cnt = 1;
	int n = intervals.size();
	int left = intervals[0][0];
	int right = intervals[0][1];
	for (int i = 1; i < n; i++)
	{
		int tl = intervals[i][0];
		int tr = intervals[i][1];
		if (tl >= right)
		{
			cnt++;
			left = tl;
			right = tr;
		}
		else if (tr<right)
		{
			left = tl;
			right = tr;
		}
	}
	return n-cnt;
}
};
