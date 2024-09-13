class Solution {
public:
int wiggleMaxLength(vector<int>& nums) {
	int left=0;
	int right;
	int count = 2;
	int n = nums.size();
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		if (nums[0] != nums[1])
		{
			return 2;
		}
		return 1;
	}
	for (int i = 1; i < n - 1; i++)
	{
		int t = nums[i] - nums[i - 1];
		right = nums[i + 1] - nums[i];
		if (t==0&&right==0&&i!=n-2)
		{
			continue;
		}
		
		if (t!=0)
		{
			left = t;
		}
		if (left < 0 && right>0 || left > 0 && right < 0)
		{
			count++;
		}
	}
	if (count == 2&&left==0)
	{
		return 1;
	}
	return count;
}
};
