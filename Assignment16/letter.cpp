class Solution {
public:
    void recursion(int index,string s,vector<string> &ans){
        ans.push_back(s);
        for(int i=index;i<s.size();i++){
            if(isalpha(s[i])){
                s[i]=isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
                recursion(i+1,s,ans);
                s[i]=isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
            }
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        int index=0;
        vector<string> ans;
        recursion(index,s,ans);
        return ans;
        
    }
};