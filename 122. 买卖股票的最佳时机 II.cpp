class Solution {
public:
int maxProfit(vector<int>& prices) {
	int n = prices.size();
	int ret = 0;
	int left = 0;
	int right = 1;
	while (right < n)
	{
		if (prices[right] <= prices[right - 1])
		{
			ret += prices[right - 1] - prices[left];
			left = right;
		}
		right++;
	}
	return ret+= prices[right - 1] - prices[left];
}
};
