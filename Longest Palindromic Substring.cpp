// Link : https://leetcode.com/problems/longest-palindromic-substring/


class Solution {
public:
    string longestPalindrome(string s) {
        string ans ="";
        int n = s.length();
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(j-i+1 > ans.length() && isPalindrome(s,i,j))
                {
                    ans=s.substr(i,j-i+1);
                }
            }
        }
        return ans; 
    }
    bool isPalindrome(string& s, int i , int j)
    {
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            return false;
        }
        return true;
    }

};
