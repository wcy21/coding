#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n;
char s[1000010];

int main() {
    scanf("%d%s", &n, s);
    vector<int> a;
    int l = 0;
    while(l < n) {
        if(s[l] == '0') l++;
        else {
            int j = l;
            while(j + 1 < n && s[j + 1] == '1') j++;
            a.push_back(j - l + 1);
            l = j + 1;
        }
    }
    sort(a.begin(), a.end());
    int m = a.size();
    if(m == 0) cout << 0;
    else if(m == 1) cout << a[0];
    else cout << a[m - 1] + a[m - 2];
    return 0;
}