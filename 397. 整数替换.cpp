class Solution {
public:
int integerReplacement(int n1) {
	unsigned n = n1;
	int cnt = 0;
	while (n != 1)
	{
		if (n == 3)
		{
			return cnt+2;
		}
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			if (n % 4 == 3)
			{
				n += 1;
			}
			else
			{
				n -= 1;
			}
		}
		cnt++;
	}
	return cnt;
}
};
