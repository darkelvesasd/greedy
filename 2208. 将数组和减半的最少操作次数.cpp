class Solution {
public:
 int halveArray(vector<int>& nums) {
	priority_queue<double, vector<double>>pq;
	double sum;
	for (auto a : nums)
	{
		sum += a;
		pq.emplace(a);
	}
	int count = 0;
	double tv = sum / 2;
	while (sum > tv)
	{
		double t = pq.top() / 2;
		sum -= pq.top() / 2;
		pq.pop();
		pq.emplace(t);
		count++;
	}
	return count;
}
};
