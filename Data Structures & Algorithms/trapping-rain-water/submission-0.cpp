class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left_max_arr(height.size(),0);
        vector<int> right_max_arr(height.size(),0);
        left_max_arr[0] = height[0];
        right_max_arr[height.size()-1] = height[height.size()-1];
        for(int i=1;i<height.size();i++){
            if(height[i]>left_max_arr[i-1]){
                left_max_arr[i] = height[i];
            }else{
                left_max_arr[i] = left_max_arr[i-1];
            }
        }
        for(int i=height.size()-2;i>=0;i--){
            if(height[i]>right_max_arr[i+1]){
                right_max_arr[i] = height[i];
            }else{
                right_max_arr[i] = right_max_arr[i+1];
            }
        }
        int ans =0;
        for(int i=0;i<height.size();i++){
            ans += min(left_max_arr[i],right_max_arr[i]) - height[i];
        }
        return ans;
    }
};
