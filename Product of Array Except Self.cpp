class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        vector<int> ans;
        left[0] = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            left[i] = left[i-1] * nums[i];
        }

        right[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            right[i] = right[i+1] * nums[i];
        }
        int value;
        for(int i=0;i<nums.size();i++)
        {
            value=1;
            value*= i>0? left[i-1] : 1;
            value*= i<nums.size()-1 ? right[i+1] : 1;
            
            ans.push_back(value);
        }
        return ans;
    }
};
