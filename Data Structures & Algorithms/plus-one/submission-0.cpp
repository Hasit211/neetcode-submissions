class Solution {
private:
    bool isall9(vector<int> digits){
        for(int i=0;i<digits.size();i++){
            if(digits[i]!=9){
                return false;
            }
        }
        return true;
    }
    void change_for_all9(vector<int>& digits){
        for(int i=0;i<digits.size();i++){
            digits[i] = 0;
        }
        digits.insert(digits.begin(),1);
    }
    void check_valid(vector<int> &digits,int idx){
        if(idx ==0){
            return;
        }
        if(digits[idx]>9){
            digits[idx] =0;
            digits[idx-1]++;
            check_valid(digits,idx-1);
        }
        check_valid(digits,idx-1);
    }
    void change_normal(vector<int> &digits){
        digits[digits.size()-1]++;
        check_valid(digits,digits.size()-1);
    }

public:
    vector<int> plusOne(vector<int>& digits) {
        bool isall_9 = isall9(digits);
        if(isall_9){
            change_for_all9(digits);
            return digits;
        }
        change_normal(digits);
        return digits;
    }
};
