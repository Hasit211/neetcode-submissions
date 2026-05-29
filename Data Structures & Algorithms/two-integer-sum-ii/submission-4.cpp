class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int> ans;
        // for(int i=0;i<numbers.size()-1;i++){
        //     int curr_target = target - numbers[i];
        //     for(int j = i+1;j<numbers.size();j++){
        //         if(numbers[j]==curr_target){
        //             ans.push_back(i+1);
        //             ans.push_back(j+1);
        //         }
        //     }
        // }
        // return ans;

        int left = 0;
        int right = numbers.size()-1;
        while(left<right){
            int sum = numbers[left] + numbers[right];
            if(sum == target){
                return {left+1, right+1};
            }else if(sum < target){
                left++;
            }else{
                right--;
            }
        }
    }
};
