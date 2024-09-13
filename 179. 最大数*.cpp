class Solution {
public:
static bool compare(string a, string b)
{
	return a+b >b+ a;
}
string largestNumber(vector<int>& nums) {
	vector<string>s;
	for (auto a : nums)
	{
		s.emplace_back(to_string(a));
	}
	sort(s.begin(), s.end(),compare);
	string ret="";
	for (auto a : s)
	{
		ret.append(a);
	}
	if (ret[0] == '0')
		return "0";
	return ret;
}
};
