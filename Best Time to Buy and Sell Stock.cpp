class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // if we can buy multiple times
        // int l,h,sum=0;
        // for(int i=0;i<prices.size()-1;i++)
        // {
        //     if(prices[i+1] >= prices[i])
        //     {
        //         l=i;
        //         while(i<prices.size()-1 && prices[i+1]>prices[i])
        //         {
        //             i++;
        //         }
        //         h=i;
        //         sum += prices[h] - prices[l];
        //     }

        // }
        // return sum;


        // only buy once and sell once

        int diff = 0;
        
        int min_price = prices[0];
        
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i] < min_price )
            {
                min_price = prices[i];
            }
            
            if(prices[i] - min_price > diff )
            {
                diff = prices[i] - min_price;
            }
        }
        
        return diff;
  
    }
};
