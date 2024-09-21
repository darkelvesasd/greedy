class Solution {
public:
int jump(vector<int>& nums) {
	int n = nums.size();
	int s = 0;
	int e = 0;
	int mx = 0;
	int count = 0;
	while (mx < n-1)
	{
		for (int i = s; i <= e; i++)
		{
			mx = max(mx, i + nums[i]);
		}
		s = e + 1;
		e = mx;
		count++;
	}
	return count;
}
};
