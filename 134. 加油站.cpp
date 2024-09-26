class Solution {
public:
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
	int n = gas.size();
	vector<int>diff(n);
	for (int i = 0; i < n; i++)
	{
		diff[i] = gas[i] - cost[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (diff[i] >= 0)
		{
            	int sum = 0;
			for (int j = i; j < n+i; j++)
			{
				sum += diff[j%n];
				if (sum<0)
				{
					i = j;
					break;
				}
			}
			if (sum >= 0)
			{
				return i;
			}
		}
	}
	return -1;
}
};
