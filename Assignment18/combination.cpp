#include <bits/stdc++.h>
using namespace std;

vector<int>v;
void recursion(int i,vector<int>num,vector<vector<int>> &ans,int target){
        if(i>=num.size()){ 
            if(accumulate(v.begin(), v.end(), 0)==target ) ans.push_back(v);
            return ;
        }
        v.push_back(num[i]);
        recursion(i+1,num,ans,target);
        v.pop_back();
        recursion(i+1,num,ans,target);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        recursion(0,candidates,ans,target);
        //ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
int main() {
	vector<vector<int>> ans;
    vector<int>a{10,1,2,7,6,1,5} ;
    ans = combinationSum2(a,8);
    for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<ans[0].size();j++) cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}