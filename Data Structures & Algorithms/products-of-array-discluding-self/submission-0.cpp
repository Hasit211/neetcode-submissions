class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int curr_product = 1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    curr_product *= nums[j];
                }
            }
            ans.push_back(curr_product);
        }
        return ans;
    }
};
