// https://leetcode.com/problems/3sum/description/

class Solution {
public:
    map<vector<int>,bool> present;
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x,start,end;
        vector<int>temp;
        vector<vector<int>> result;
        
            for(int i=0;i<nums.size()-2;i++)
            {
                x=nums[i];
                start=i+1;
                end=nums.size()-1;
                while(start<end)
                {
                    if(x+nums[start]+nums[end]==0)
                    {
                        temp.push_back(x);
                        temp.push_back(nums[start]);
                        temp.push_back(nums[end]);
                        sort(temp.begin(),temp.end());
                        if(!present[temp])
                        {
                            result.push_back(temp);
                            present[temp]=true;
                        }
                        temp.clear();
                        end--;
                        continue;
                    }
                    if(-x<nums[start]+nums[end])
                    {
                        end--;
                        continue;
                    }
                    if(-x>nums[start]+nums[end])
                    {
                        start++;
                    }
                }
                
            }
        return result;
    }
};
