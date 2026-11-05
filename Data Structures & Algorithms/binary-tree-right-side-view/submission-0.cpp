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
    vector<int> rightSideView(TreeNode* root) {

        vector<int> answer;

        if(root == nullptr){
            return answer;
        }

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){

            int levelsize = q.size();

            for(int i = 0; i < levelsize;i++){

                TreeNode* node = q.front();
                q.pop();

                if(i == levelsize-1) answer.push_back(node->val);

                if(node->left != nullptr){
                    q.push(node->left);

                }
                if(node->right != nullptr){
                    q.pop(node->right);
                }

            }
        }
        return answer;
        
    }
};
