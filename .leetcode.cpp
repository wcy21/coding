#include ".debug.hpp"

using namespace std;

/*
    content
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// begin
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        return 0;
    }
};
// end

Solution t;

int main() {
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << t.findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}
/*
g++ .leetcode.cpp -o test
.\test
*/