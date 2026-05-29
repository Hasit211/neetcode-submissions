class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector <int> ans;
       int len = nums.size();
       for(int i =0;i<len-1;i++){
        int curr_target = target - nums[i];
        for(int j = i+1;j<len;j++){
            if(curr_target == nums[j]){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
       } 
       return ans;
    }
};
