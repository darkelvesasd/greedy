class Solution {
public:
int maxSumDivThree(vector<int>& nums) {
	int sum = 0;
	int t1 = INT_MAX/2, t2 = INT_MAX/2, t3 = INT_MAX/2, t4 = INT_MAX/2;
	for (auto a : nums)
	{
		sum += a;
		if (a % 3 == 1)
		{
			if (a < t1)
			{
				t2 = t1;
				t1 = a;
			}
			else if (a < t2)
			{
				t2 = a;
			}
		}
		if (a % 3 == 2)
		{
			if (a < t3)
			{
				t4 = t3;
				t3 = a;
			}
			else if (a < t4)
			{
				t4 = a;
			}
		}
	}
	if (sum % 3 == 0)
	{
		return sum;
	}
	else if (sum % 3 == 1)
	{
		return max(sum - t1, sum - t4 - t3)>0?max(sum - t1, sum - t4 - t3):0;
	}
	else
	{
		return max(sum - t3, sum - t1 - t2)>0? max(sum - t3, sum - t1 - t2):0;
	}
}
};
