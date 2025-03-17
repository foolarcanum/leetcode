class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>si;
        unordered_map<char,int>ti;
        for(int i=0;i<s.length();i++){
            if(si.find(s[i])==si.end()){si[s[i]]=i;}
            if(ti.find(t[i])==ti.end()){ti[t[i]]=i;}
            if(si[s[i]]!=ti[t[i]]){return false;}
        }
        return true;
    }
};