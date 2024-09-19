class Solution {
public:
int largestSumAfterKNegations(vector<int>& nums, int k) {
	int neg = 0;
	int sum = 0;
	int n = nums.size();
	vector<int>v;
	sort(nums.begin(), nums.end());
	for (auto a : nums)
	{
		if (a < 0)
		{
			neg++;
		}
		v.emplace_back(abs(a));
		sum += abs(a);
	}
	sort(v.begin(), v.end());
	if (neg == k)
	{
		return sum;
	}
	else if (neg > k)
	{
		for (int i = k; i < neg; i++)
		{
			sum += 2 * nums[i];
		}
		return sum;
	}
	else
	{
		if ((k - neg) % 2 == 0)
		{
			return sum;
		}
		else
		{
			return sum - 2 * v[0];
		}
	}
}
};
