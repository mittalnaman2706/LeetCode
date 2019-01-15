class Solution {
public:
    void reverseWords(string &str) {
        
        string q="";
        string word; 
        stringstream iss(str); 
        while (iss >> word) 
            q=word+" "+q; 
        
        str=q.substr(0,q.size()-1);
    }
};