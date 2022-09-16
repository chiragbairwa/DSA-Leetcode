class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0, j=0;
        int sL = s.length(), tL = t.length();
        
        while( i<sL && j<tL){
            if(s[i] == t[j]){
                ++i; ++j;
            }
            else
                j++;
        }
        
        if(i == sL)
            return true;
        else 
            return false;
        
    }
};