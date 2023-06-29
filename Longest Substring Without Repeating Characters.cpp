// Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/


// Code :


class Solution {
public:
    int lengthOfLongestSubstring(string arr) {

        int i=0,j=0,ans=0,n=arr.length();
        unordered_map<char,int> mp;

        if(n==0) return 0;

        while(j < n && i<=j)
        {
            if(mp[arr[j]]!=0)
            {
                while(mp[arr[j]]!=0 && i<j)
                {
                    mp[arr[i]]--;
                    i++;
                }
            }
            mp[arr[j]]++;
            if(j-i+1 > ans)
                ans=j-i+1;
            j++;
        }

        return ans;

    }
};
