class Solution {
public:
    string reverseWords(string s) {
        string reverse="";
        string word="";
        int n=s.length();
        int i=0;
        while(i<n){
            while(s[i]!=' '&&i<n){
                word+=s[i];
                i++;
            }
            while(s[i]==' '&&i<n){i++;}
            if(!word.empty()){
                if(!reverse.empty()){reverse=word+' '+reverse;}
                else{reverse+=word;}
            }
            word="";
        }
        return reverse;
    }
};