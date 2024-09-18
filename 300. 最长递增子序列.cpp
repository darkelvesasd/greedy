int lengthOfLIS(vector<int>& nums) {
	vector<int>ret;
	int n = nums.size();
	for (auto a : nums)
	{
		int m = ret.size();
		if (ret.empty() || a > ret[m-1])
		{
			ret.emplace_back(a);
		}
		else
		{
			int left = 0;
			int right = m - 1;
			while (left < right)
			{
				int mid = (left + right) / 2;
				if (ret[mid] >= a)
				{
					right = mid;
				}
				else
				{
					left = mid+1;
				}
			}
			ret[left] = a;
		}
	}
	return ret.size();
}
