class Solution {
public:
    vector<string>result;
    vector<string> generateParenthesis(int n) {
        string s="";
        func(s,n,0);
        
        return result;
    }
    void func(string s,int open,int close)
    {
        if(!open && !close)
        {
            result.push_back(s);
            return;
        }
        
        if(open>0)
            func(s+'(',open-1,close+1);
        if(close>0)
            func(s+')',open,close-1);
        return;
    }
};