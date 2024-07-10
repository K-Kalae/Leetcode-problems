#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
void combinationSumHelper(const vector<int>& candidates, int target, vector<int>& current, int start, vector<vector<int>>& ans) {
    if (target == 0) {
        ans.push_back(current);
        return;
    }

    for (int i = start; i < candidates.size(); ++i) {
        if (candidates[i] <= target) {
            current.push_back(candidates[i]);
            combinationSumHelper(candidates, target - candidates[i], current, i, ans);
            current.pop_back();
        }
    }
}

// Main function to find all unique combinations
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    std::vector<std::vector<int>> ans;
    std::vector<int> current;
    combinationSumHelper(candidates, target, current, 0, ans);
    return ans;
}
}
;