#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<map>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val):val(val),left(NULL),right(NULL){};
};

class Solution{
public: 
    vector<vector<int> > levelOrder(TreeNode *root) {
        // write your code here
	vector<vector<int> > res;	
	queue<TreeNode*>s1;
	queue<TreeNode*>s2;
	s1.push(root);
	while(!s1.empty() || !s2.empty()){
	    vector<int>v1,v2;
	    while(!s1.empty()){
	   	TreeNode *node = s1.front();
		v1.push_back(node->val);
		cout<<node->val<<endl;
		if(node->left != NULL) s2.push(node->left);	
	    	if(node->right != NULL) s2.push(node->right);
		
	    	s1.pop(); 
	    }
	    if(!v1.empty()) res.push_back(v1); 
	    while(!s2.empty()){
	   	TreeNode *node = s2.front();
		v2.push_back(node->val);
		cout<<node->val<<endl;

		if(node->left != NULL) s1.push(node->left);	
	    	if(node->right != NULL) s1.push(node->right);
		
	    	s2.pop(); 
	    }
	    if(!v2.empty()) res.push_back(v2); 
	}
	return res;
    }
    void postOrderTraversal(TreeNode *root){
	stack<TreeNode *>stk;  	 
	if(root == NULL) return;
	TreeNode *curr = root , *lastVisited = NULL;
//	stk.push(curr);
	while(!stk.empty() || curr != NULL){
		while(curr != NULL){
			stk.push(curr);	
			curr = curr->left;
		}	
		curr = stk.top();
		cout<<"top"<<curr->val<<endl;
		if(curr->right == NULL || curr->right == lastVisited){
		    cout<<curr->val<<endl;
		    stk.pop();
		    lastVisited = curr;
		    curr = NULL;	
		}else{
			curr= curr->right;	
		}
	}
    }
   void inorderTraversal(TreeNode *root){
  	stack<TreeNode*>stk;
	TreeNode *curr = root;
	while(!stk.empty() || curr != NULL){
		while(curr != NULL){
			stk.push(curr);	
			curr = curr->left;
		}	
		curr = stk.top();
		cout<<curr->val<<endl;
		stk.pop();
		curr = curr->right;
	}
   }  
   void preorderTraversal(TreeNode *root){
  	stack<TreeNode*>stk; 
	TreeNode *curr = root;
	stk.push(curr);
	while(!stk.empty()){
	    TreeNode *node = stk.top();
	    stk.pop();
	    cout<<node->val<<endl;
	    if(node->right != NULL) stk.push(node->right);
	    if(node->left != NULL) stk.push(node->left);
	}
   }
};

//int main(){
//    TreeNode *node1 = new TreeNode(1);
//    TreeNode *node2 = new TreeNode(2);
//    TreeNode *node3 = new TreeNode(3);
//    TreeNode *node4 = new TreeNode(4);
//    TreeNode *node5 = new TreeNode(5);
//
//    node1->left = node2;
//    node1->right = node3;
//    node2->left = node4;
//    node2->right = node5;
//
//    Solution s;
//    s.preorderTraversal(node1); 
////    s.postOrderTraversal(node1);
////    s.levelOrder(node1);
////    s.inorderTraversal(node1);
//    
//    return 0;
//}