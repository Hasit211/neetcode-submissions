class Solution {
private:
    void getSubsets(vector<int> &nums, vector<int> &ds,vector<vector<int>> &ans,int index){
        if(index == nums.size()){
            ans.push_back(ds);
            return;
        }
        //add
        ds.push_back(nums[index]);
        getSubsets(nums,ds,ans,index+1);
        
        ds.pop_back();
        getSubsets(nums,ds,ans,index+1);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        getSubsets(nums,ds,ans,0);
        return ans;

    }
};
