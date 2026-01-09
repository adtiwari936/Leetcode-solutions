class Solution {
public:
    int lengthOfLastWord(string s) {
        int p = s.size();
        int length_of_word=0;
        for(int i=p-1;i>=0;i--){
            if(length_of_word != 0 && s[i]==' ') break;
            if(s[i]!=' ') length_of_word++;
        }
        return length_of_word;
    }
};
