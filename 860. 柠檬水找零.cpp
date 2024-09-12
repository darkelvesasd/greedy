class Solution {
public:
   bool lemonadeChange(vector<int>& bills) {
	int save[2];
	for (auto a : bills)
	{
		switch (a)
		{
		case 5:
			save[0]++;
			break;
		case 10:
			save[0]--;
			save[1]++;
			if (save[0] < 0)
			{
				return false;
			}
			break;
		case 20:
			if (save[1])
			{
				save[1]--;
				save[0]--;
			}
			else
			{
				save[0] -= 3;
			}
			if (save[0] < 0)
			{
				return false;
			}
		}
	}
	return true;
}
};
