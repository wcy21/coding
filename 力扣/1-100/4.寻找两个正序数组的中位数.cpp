class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int len = m + n;
        int last = -1, cur = -1;
        int lm = 0, ln = 0;
        for (int i = 0; i <= len / 2; ++i) {
            last = cur;
            if (lm < m && (ln >= n || nums1[lm] < nums2[ln]))
                cur = nums1[lm++];
            else
                cur = nums2[ln++];
        }
        return (len & 1) ? cur : (last + cur) / 2.0;
    }
};