class Solution {
public:
    void traverse(TreeNode *root,vector<int> &A)
    {   
        if(!root)  return;
        stack<TreeNode*> S;
        TreeNode *curr = root;
        while (!S.empty() || curr != NULL){
            if (curr != NULL) {
                S.push(curr);
			    curr = curr->left;
            }
            else
            {
			    curr = S.top(); 
			    S.pop(); 
			    A.push_back(curr->val);
			    curr = curr->right; 
		    }
        } 
    }
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int>ans;
        traverse(root,ans);
       return ans;
    }
};