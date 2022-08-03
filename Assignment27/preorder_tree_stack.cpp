class Solution {
    
public:
    void traverse(TreeNode *root,vector<int> &A)
    {   if(!root)
    {
        return;
    }
    stack<TreeNode*>S;
        S.push(root);
        while(!S.empty())
        {
            TreeNode* temp = S.top();
            A.push_back(temp->val);
            S.pop();
            if(temp->right)
            {
                S.push(temp->right);
            }
            if(temp->left)
            {
                S.push(temp->left);
            }
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        traverse(root,ans);
       return ans;
        
    }
};