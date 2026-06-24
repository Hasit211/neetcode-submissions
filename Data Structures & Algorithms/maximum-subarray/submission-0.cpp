class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++){
            int temp =0;
            for(int j =i;j<nums.size();j++){
                temp += nums[j];
                if(temp>ans){
                    ans = temp;
                }
            }
        }
        return ans;
    }
};
