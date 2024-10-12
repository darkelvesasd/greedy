class Solution {
public:
 int pileBox(vector<vector<int>>& box) {
	sort(box.begin(), box.end());
	int n = box.size();
	vector<int>v(n);
	v[0] = box[0][2];
	int mx = v[0];
	for (int i = 1; i < n; i++)
	{
		v[i] = box[i][2];
		for (int j = 0; j < i; j++)
		{
			if (box[j][0] < box[i][0] && box[j][1] < box[i][1] && box[j][2] < box[i][2])
			{
				v[i] = max(v[i], v[j] + box[i][2]);
			}
		}
		mx = max(mx, v[i]);
	}
	return mx;
}
};
