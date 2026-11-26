class Solution {
public:
    int maxDepth(string s) {
        int dept=0,maxd=0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                dept++;
            }
            else if(s[i]==')'){
                dept--;
            }
            maxd=max(dept,maxd);
        }
        return maxd;
    }
};