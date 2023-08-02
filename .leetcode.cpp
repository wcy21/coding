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
    string replaceSpaces(string &str) {
        string ret;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == ' ')
                ret += "%20";
            else
                ret += str[i];
        }
        return ret;
    }
};
// end

Solution t;

int main() {
    vector<int> nums = {2, 3, 5, 4, 3, 2, 6, 7};
    cout << t.duplicateInArray(nums) << endl;

    system("pause");
    return 0;
}
/*
g++ .leetcode.cpp -o test
.\test
*/