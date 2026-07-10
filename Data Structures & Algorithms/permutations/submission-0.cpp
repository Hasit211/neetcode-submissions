class Solution {
private:
    void getPermutations(vector<vector<int>> &ans,vector<int> &nums, vector<bool> &is_taken, vector<int> &ds) {
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(is_taken[i] == false){
                is_taken[i] = true;
                ds.push_back(nums[i]);
                getPermutations(ans,nums,is_taken,ds);
                ds.pop_back();
                is_taken[i] = false;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<bool>is_taken(nums.size());
        vector<int> ds;
        getPermutations(ans,nums,is_taken,ds);
        return ans;
        
    }
};
