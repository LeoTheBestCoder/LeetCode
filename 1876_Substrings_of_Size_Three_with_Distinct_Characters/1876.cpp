#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans = 0;
        if (s.size() < 3) {
            return 0;
        }
        for (int i = 0; i <= s.size() - 3; i++) {
            if (s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2]) {
                ans++;
            }
        }
        return ans;
    }
};

int main() {
    Solution a;
    string s1 = "xyzzaz", s2 = "aababcabc";
    cout << a.countGoodSubstrings(s1) << " " << a.countGoodSubstrings(s2);
    return 0;
}