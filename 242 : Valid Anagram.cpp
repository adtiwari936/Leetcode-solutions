class Solution {
public:
    bool isAnagram(string s, string t) {
        int x = s.size();
        int p = t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(x==p){
            for(int i=0;i<x;i++){
                if(s[i]!=t[i]){
                    return false;
                }
            }
            return true;
        }
        else return false;
    }
};
