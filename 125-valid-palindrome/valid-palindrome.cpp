class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==1){return true;}
        string::reverse_iterator r=s.rbegin();
        string::iterator i=s.begin();
        int half=s.size()/2;
        int size=s.size();
        int m=0;
        int n=0;
        while(m<size-1&&n<size-1){
            while(m<size-1&&*(r+m)<65||*(r+m)>122||(*(r+m)>90&&*(r+m)<97)){
                if(*(r+m)>47&&*(r+m)<58){break;}
                m++;
            }
            while(n<size-1&&*(i+n)<65||*(i+n)>122||(*(i+n)>90&&*(i+n)<97)){
                if(*(i+n)>47&&*(i+n)<58){break;}
                n++;
            }
            if(n==size-1&&m==size-1){
                    return true;
            }
            if(toupper(*(r+m))!=toupper(*(i+n))){return false;}
            m++;
            n++;
        }
        return true;
    }
};