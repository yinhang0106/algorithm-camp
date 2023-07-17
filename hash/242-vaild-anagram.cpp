#include <iostream>
#include <string>
#include <algorithm>
#include <array>

using namespace std;

class Solution {
public:
    static bool isAnagram(const string& s, const string& t) {
        std::array<int, 26> alpha = {0};
        for (char i : s) {
            alpha[i - 'a']++;
        }
        for (char i : t) {
            alpha[i - 'a']--;
        }
        return std::ranges::all_of(alpha, [](int i) { return i == 0; });
    }
};

int main() {
    std::boolalpha(cout);
    string s = "anagram";
    string t = "nagaram";
    bool ret = Solution::isAnagram(s, t);
    cout << ret << endl;
    return 0;
}