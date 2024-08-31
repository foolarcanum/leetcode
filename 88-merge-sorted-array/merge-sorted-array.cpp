class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < m + n; j++) {
                if (nums2[i] <= nums1[j] || j >= m) {
                    nums1.insert(nums1.begin() + j, nums2[i]);
                    break;
                }
            }
        }
        nums1.resize(m + n);
    }
};