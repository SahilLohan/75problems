// Link : https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int min(int x,int y)
    {
        if(x<=y)
            return x;
        else return y;
    }
    int maxArea(vector<int>& height) {
        int max = 0;
        int temp;
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
            temp = (j-i)*min(height[i],height[j]);
            if(temp>max)
            {
                max=temp;
            }
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return max;
    }
};
