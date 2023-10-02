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
    string longestPalindrome(string s) {

    }
};
// end

Solution t;

int main() {
    // vector<vector<int>> nums = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
    // vector<int>nums1 = {1, 3};
    // vector<int>nums2 = {2};
    string s = "babad";
    
    cout << t.longestPalindrome(s) << endl;

    system("pause");
    return 0;
}
/*
g++ .leetcode.cpp -o test
.\test
*/