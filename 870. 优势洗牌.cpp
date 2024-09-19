class Solution {
public:
vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
	int n = nums1.size();
	vector<int>ret(n);
	vector<int>v1(n);
	vector<int>r(n);
	int left = 0;
	int right = n - 1;
	for (int i = 0; i < n; i++)
	{
		v1[i] = i;
	}
	sort(v1.begin(), v1.end(), [&](int x, int y)
	{
		return nums2[x] < nums2[y];
	});
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());
	for (int i=0; i<n; i++)
	{
		if (nums1[i] <= nums2[left])
		{
			ret[right--] = nums1[i];
		}
		else
		{
			ret[left++] = nums1[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		r[v1[i]] = ret[i];
	}
	return r;
}
};
