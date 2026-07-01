class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0;
        int buy= prices[0];
        for(int i=1;i<prices.size();i++){
            int curr = prices[i];
            if(curr<buy){
                buy = curr;
            }else if(ans<(curr-buy)){
                ans = curr-buy;
            }

        }
        return ans;
    }
};
