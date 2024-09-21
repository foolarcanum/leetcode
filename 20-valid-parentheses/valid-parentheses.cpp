class Solution {
public:
    bool isValid(string s) {
        stack<char>open;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                open.push(s[i]);
            }
            else if(s[i]==')'){
                if(!open.empty()&&open.top()=='('){open.pop();}
                else{return false;}
            }
            else if(s[i]=='}'){
                if(!open.empty()&&open.top()=='{'){open.pop();}
                else{return false;}
            }
            else{
                if(!open.empty()&&open.top()=='['){open.pop();}
                else{return false;}
            }
        }
        if(open.empty()){return true;}
        return false;
    }
};