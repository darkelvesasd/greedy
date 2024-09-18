class Solution {
public:
bool increasingTriplet(vector<int>& nums) {
	vector<int>ret;
	int n = nums.size();
	ret.emplace_back(nums[0]);
	for (auto a : nums)
	{
		if (a > ret.back())
		{
			ret.emplace_back(a);
			if (ret.size() >= 3)
			{
				return true;
			}
			continue;
		}
		int left = 0;
		int right = ret.size() - 1;
		while (left < right)
		{
			int mid = (left + right) / 2;
			if (ret[mid] < a)
			{
				left = mid + 1;
			}
			else
			{
				right = mid;
			}
		}
		ret[left] = a;
	}
	return false;
}
};
