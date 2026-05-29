class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //     vector<int> ans;
    //     for(int i=0;i<nums.size();i++){
    //         int curr_product = 1;
    //         for(int j=0;j<nums.size();j++){
    //             if(i!=j){
    //                 curr_product *= nums[j];
    //             }
    //         }
    //         ans.push_back(curr_product);
    //     }
    //     return ans;

        vector<int> ans(nums.size(),1);

        int prefix = 1;
        int suffix = 1;

        for(int i=0;i<nums.size();i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }

        for(int i = nums.size()-1;i>=0;i--){
            ans[i]*= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
    
};
