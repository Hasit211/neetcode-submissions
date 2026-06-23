class Solution {
public:
    double myPow(double x, int n) {
        double ans =1;
        if(n <0){
            x = 1/x;
            n = -n;
        }
        if( n ==0){
            return 1;
        }
        if(x == 0){
            return 0;
        }
        for(int i=1;i<=n;i++){
            ans *= x;
        }
        return ans;
    }
};
