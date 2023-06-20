// https://leetcode.com/problems/search-in-rotated-sorted-array/description/


class Solution {
public:

    int getIndexOfMinElement(vector<int>& nums) 
    {
        int l=0,r=nums.size()-1,m;
        

        while(l < r  &&  nums[l] > nums[r])
        {
            m = (l+r)/2;
            if(l==m)
            {
                l++;
                continue;
            }
            if(nums[l] < nums[m] && nums[r] < nums[m])
            {
                l=m;
            }// note that there will be no number between nums[l] and nums[r]
            else
            {
                r=m;
            }

            if(l>0 && r<nums.size()-1 && nums[l] <= nums[r])
            return 0;
        }

        if(l<=nums.size()-1)
            return l;
        if(r>=0)
            return r;

        return -1; // this will never be executed
    }
    int binarySearch(vector<int>& arr, int l, int r, int x)
    {
        while (l <= r) {
            int m = l + ((r - l) / 2) ;
    
            // Check if x is present at mid
            if (arr[m] == x)
                return m;
    
            // If x greater, ignore left half
            if (arr[m] < x)
                l = m + 1;
    
            // If x is smaller, ignore right half
            else
                r = m - 1;
        }
    
        // If we reach here, then element was not present
        return -1;
    }

    
    int search(vector<int>& nums, int target) {
        int indexOfMinElement = getIndexOfMinElement(nums);
        if(nums.size()==1 && nums[0]==target)
        return 0;
        if(nums.size()==1 && nums[0]!=target)
        return -1;

        if(indexOfMinElement == 0 )
        {
            return binarySearch(nums , 0 , nums.size()-1 , target);
        }
        else
        {
            int ans = binarySearch(nums , 0 , indexOfMinElement-1 , target);
            if(ans != -1) return ans;
            else return binarySearch(nums , indexOfMinElement , nums.size()-1 , target);
        }
    }
};
