// Link : https://leetcode.com/problems/valid-anagram/


// Code :


class Solution {
public:
    bool isAnagram(string s, string t) {
        // Lets try to do it with bit mask
        if(s.length()!=t.length()) return false;
        else
        {
            unordered_map<char,int> mp1;
            unordered_map<char,int> mp2;

            for(auto ch : s)
            {
                mp1[ch]++;
            }
            for(auto ch : t)
            {
                mp2[ch]++;
            }
            if(mp1==mp2) return true;

            return false;
        }
    }
};
