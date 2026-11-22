class Solution {
public:
    bool checkString(string s) {
        int bindex=0,i=0;
        for(auto it : s){
            if(it=='b'){
                bindex=i;
                break;
            }
            i++;
        }
        for(int j=i;j<s.size();j++){
            if(s[j]=='a'){
                return false;
            }
        }
        return true;
    }
};