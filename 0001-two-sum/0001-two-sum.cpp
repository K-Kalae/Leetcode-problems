class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int i=0;
       int j=0;
      vector<int> z;
       for (i=0;i<nums.size();i++)
       {
          for (j=0;j<i;j++)
          {
             if (nums[i]+nums[j]==target)
             {
               //cout<<nums[i]<<" "<<nums[j];  
                 z.push_back(j);
                 z.push_back(i);
                 break;
             }
            
          } 
       }
       return z;
    }
};