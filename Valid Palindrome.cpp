// Link : https://leetcode.com/problems/valid-palindrome

// Code :

class Solution {
public:
    bool isPalindrome(string st) {
        if(st.length()==0) return true;
        string s="";
        for(int i=0;i<st.length();i++)
        {
          char c=st[i];
            
            if(isalnum(c))
            {
                if(isupper(c))
                {
                    c=tolower(c);
                }
                s+=c;
            }
        }

        int i=0;
        int j=s.length()-1;

        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};
