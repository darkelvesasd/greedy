class Solution {
public:
int findMinArrowShots(vector<vector<int>>& points) {
	sort(points.begin(), points.end());
	int count = 1;
	int l;
	int r;
	int right = points[0][1];
	int n = points.size();
	for (int i = 1; i < n; i++)
	{
		l = points[i][0];
		r = points[i][1];
		if (points[i][0] > right)
		{
			right = r;
			count++;
		}
		else
		{
			right = min(right, r);
		}
	}
	return count;
}
};
