class Solution {
public:
int maxProfit(vector<int>& prices) {
	int mn = INT_MAX;
	int mx = INT_MIN;
	for (auto a : prices)
	{
		mx = max(a - mn, mx);
		mn = min(mn, a);
	}
	return mx>0?mx:0;
}
};
