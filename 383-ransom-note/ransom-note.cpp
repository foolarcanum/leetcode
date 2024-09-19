class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mag;
        for(int i=0;i<magazine.length();i++){
            if(mag[magazine[i]]){mag[magazine[i]]++;}
            else{mag[magazine[i]]=1;}
        }
        for(int i=0;i<ransomNote.length();i++){
            if(mag[ransomNote[i]]){mag[ransomNote[i]]--;}
            else{return false;}
        }
        return true;    
    }
};