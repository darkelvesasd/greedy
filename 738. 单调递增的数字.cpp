class Solution {
public:
int monotoneIncreasingDigits(int n) {
	if (n < 10)
	{
		return n;
	}
	string s;
	int pre = 0;
	int cur = 1;
	int pp = 0;
	while (n > 0)
	{
		s += to_string(n % 10);
		n /= 10;
	}
	reverse(s.begin(),s.end());
	int ln = s.length();
	string ret;
	while (cur < ln)
	{
		if (s[pre] > s[cur])
		{
			if (pp == ret.size())
			{
				ret+=s[pp] - 1;
			}
			else
			{
				ret[pp] = s[pp] - 1;
			}
			pp++;
			while (ret.length() < ln)
			{
				if (pp == ret.size())
				{
					ret += "9";
				}
				else
				{
					ret[pp] = '9';
				}
				pp++;
			}
			return stoi(ret);
		}
		else if (s[pre] == s[cur])
		{
			ret += s[pre];
		}
		else
		{
			ret += s[pre];
			pp = cur;
		}
		cur++;
		pre++;
	}
	return stoi(ret + s[ln - 1]);
}
};
