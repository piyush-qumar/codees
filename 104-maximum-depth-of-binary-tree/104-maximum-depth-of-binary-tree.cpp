/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
//         int height=-1;
//         queue<TreeNode>q;
//         if(root==NULL)
//             return height;
//         q.push(root);
//         while(!q.empty())
//         {
//             height++;
//             int size=q.size();
//             while(size>0)
//             {
//                 size--;
//                 TreeNode *poi=q.front();
//                 q.pop();
//                 if(poi->left!=NULL)
//                     q.push(poi->left);
//                 if(poi->right!=NULL)
//                     q.push(poi->right);
//             }
//         }
//         return height;
        if(!root)
            return 0;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        return 1+max(lh,rh);
        
    }
    
};