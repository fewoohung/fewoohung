
#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int check;
        vector<int> result;
        
        for (int i=0; i <= nums.size(); i++)
        {
            check = target - nums[i];
            
            int j=i+1;
            while(j<nums.size())
            {
                if(check == nums[j])
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
                j++;
            }
            if (result.size() == 2)
            {
                break;
            }
            
        }
    }
};