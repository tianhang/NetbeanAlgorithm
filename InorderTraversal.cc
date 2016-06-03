#include <iostream>
#include<map>
#include<vector>
#include<stack>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};
class Solution{
public:
	vector<int> inorderTraversal(TreeNode *root){
  		 stack<TreeNode*>stk;
  		 stack<TreeNode*>stk2;
		 vector<int>res;
		 stk.push(root);
		 while(!stk.empty()){
		     TreeNode *curr = stk.top();
		     stk2.push(curr);
		     stk.pop();
		     if(curr->left != NULL) stk.push(curr->left);
		     if(curr->right != NULL) stk.push(curr->right);
		 }
		 while(!stk2.empty()){
			res.push_back(stk2.top()->val); 
			stk2.pop();
		 }
		 return res;
	}
	int findKthLargest(vector<int>& nums, int k) {
       		 
    	}
};

//
//int main(int argc, char**argv) {
//    // Prints welcome message...
////    struct TreeNode *node1 = new TreeNode(1); 
////    struct TreeNode *node2 = new TreeNode(2); 
////    struct TreeNode *node3 = new TreeNode(3); 
////    struct TreeNode *node4 = new TreeNode(4); 
////    struct TreeNode *node5 = new TreeNode(5); 
////
////    node1->left = node2;
////    node1->right = node3;
////    node2->left = node4;
////    node2->right = node5;
//
//    std::cout << "Welcome ..." << std::endl;
//    Solution sln;
////    vector<int> v = sln.inorderTraversal(node1);
////    for(int i =0 ;i<v.size();i++){
////    	std::cout <<v[i] << std::endl;
////    }
//    
//    return 0;
//}
