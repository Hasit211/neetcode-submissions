class Solution {
public:
    bool isAnagram(string s, string t) {
        int len_s = s.size();
        int len_t = t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s!=t){
            return false;
        }else{
            for(int i=0;i<len_s;i++){
                if(s[i]!=t[i]){
                    return false;
                    break;
                }
            }
            return true;
        }

    }
};
