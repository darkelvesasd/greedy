class Solution {
public:
bool canJump(vector<int>& nums) {
	int s = 0, e = 0, mx = 0, n = nums.size();
	while (mx < n - 1)
	{
		for (int i = s; i <= e; i++)
		{
			mx = max(mx, i + nums[i]);
		}
		s = e + 1;
		e = mx;
		if (s > e)
		{
			return false;
		}
	}
	return true;
}
};
