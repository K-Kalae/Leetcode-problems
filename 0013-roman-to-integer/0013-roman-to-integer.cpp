#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> romanToInt;
        romanToInt['I'] = 1;
        romanToInt['V'] = 5;
        romanToInt['X'] = 10;
        romanToInt['L'] = 50;
        romanToInt['C'] = 100;
        romanToInt['D'] = 500;
        romanToInt['M'] = 1000;

        int value = 0;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            if (i < n - 1 && romanToInt[s[i]] < romanToInt[s[i + 1]]) {
                value += romanToInt[s[i + 1]] - romanToInt[s[i]];
                ++i; // Skip the next character
            } else {
                value += romanToInt[s[i]];
            }
        }

        return value;
    }
};
