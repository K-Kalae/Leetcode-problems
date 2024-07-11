#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         sort(nums.begin(), nums.end());
         unordered_map<int, int> myMap;
         for (int i = 0; i < nums.size(); ++i) {
        myMap[nums[i]] = i;
    }
    
     vector<vector<int>> ans;
     for (int i = 0; i<nums.size()-2; i++)
    { for (int j=i; j<nums.size()-1;j++)
    {  
        if (myMap.find(-(nums[i]+nums[j])) != myMap.end() && i<j  && i<myMap[-(nums[i]+nums[j])] && j<myMap[-(nums[i]+nums[j])])
        {
                vector<int> triplet = {nums[i], nums[j], -(nums[i]+nums[j])};

                // Sort the triplet to ensure uniqueness
               // sort(triplet.begin(), triplet.end());

                // Check if the sorted triplet already exists in ans
                if (find(ans.begin(), ans.end(), triplet) == ans.end()) {
                    ans.push_back(triplet);
                }
        }
    
    }
    }
    return ans;   
    }
};