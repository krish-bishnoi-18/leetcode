class Solution {
public:
    char findTheDifference(string s, string t) {
        int asscii1=0,asscii2=0;
        for(auto it:s){
            asscii1+=int(it);
        }
        for(auto it:t){
            asscii2+=int(it);
        }
        return char(asscii2-asscii1);

    }
};