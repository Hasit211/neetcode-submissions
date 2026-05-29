class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                int curr_sum = nums[i]+nums[j];
                for(int k = j+1;k<nums.size();k++){
                    if(curr_sum + nums[k] == 0){
                        ans.push_back({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};
