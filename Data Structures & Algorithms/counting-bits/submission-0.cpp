class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int counter =0;
            int temp =i;
            while(temp){
                if(temp&1){
                    counter++;
                }
                temp >>=1;
            }
            ans.push_back(counter);
        }
        return ans;
    }
};
