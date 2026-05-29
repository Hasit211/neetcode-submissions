class Solution {
public:
    bool isPalindrome(string s) {
        for(auto &x : s){
            x = tolower(x);
        }
        vector<char> question;
    for(int i=0;i<s.size();i++){
        if((s[i]>=97 && s[i] <=122) || (s[i]>=48 && s[i]<= 57)){
            question.push_back(s[i]);
        }
    }
    for(int i =0;i<(question.size())/2;i++){
        if(question[i]!=question[question.size()-1-i]){
            return false;
            break;
        }
    }
    return true;
    }
    
};
