class Solution {
public:
  int findLengthOfLCIS(vector<int>& nums) {
	int left=0;
	int right=1;
	int count = 1;
	int n = nums.size();
	while (right<n)
	{
		if (nums[right-1] < nums[right])
		{
			right++;
		}
		else
		{
			count = max(count, right-left);
			left = right;
			right++;
		}
	}
	return max(count, right - left);
}
};
