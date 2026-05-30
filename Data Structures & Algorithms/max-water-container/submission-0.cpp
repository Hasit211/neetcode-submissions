class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int left = 0;
        int right = heights.size()-1;
        while(left<right){
            int curr_area = min(heights[left],heights[right]) * (right - left);

            if(ans < curr_area){
                ans = curr_area;
            }

            if(heights[left]>heights[right]){
                right--;
            }else{
                left++;
            }
        }
        return ans;
    }
};
