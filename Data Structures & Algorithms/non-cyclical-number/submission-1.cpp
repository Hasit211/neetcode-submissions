class Solution {
public:
    bool isHappy(int n) {
        vector<int> store(244,0);

        while(n!=1 && n!=7){
            int sum =0;
            int t = n;
            while(t>0){
                int temp = t%10;
                sum += temp*temp;
                t /=10;
            }
            store[sum]++;
            if(store[sum]>1){
                return false;
            }
            n = sum;
        }
        return true;
    }
};
