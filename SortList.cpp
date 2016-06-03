/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
#include<iostream>
#include<vector>
using namespace std;
class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int val):val(val),next(NULL){}
};
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: You should return the head of the sorted linked list,
                    using constant space complexity.
     */
    ListNode *findMidNode(ListNode *head){
        ListNode *slowptr = head,*fastptr=head;
        while(fastptr != NULL){
            fastptr = fastptr->next;
            if(fastptr != NULL){
                fastptr = fastptr->next;
            }else{
                break;
            }
            slowptr = slowptr->next;
        }
        return slowptr;
    }
    ListNode *merge(ListNode *headA,ListNode *headB){
        ListNode *currA = headA,*currB=headB,*dummy = new ListNode(0),*curr = dummy,*node;
        while(currA != NULL && currB != NULL){
            if(currA->val < currB->val){
                node = new ListNode(currA->val);
                curr->next = node;
                curr = node;
                currA = currA->next;
            }else{
                node = new ListNode(currB->val);
                curr->next = node;
                curr = node;
                currB = currB->next;
            }
        }
        if(currA != NULL) curr->next = currA;
        if(currB != NULL) curr->next = currB;
        return dummy->next;
    }
    ListNode *sortList(ListNode *head) {
        if(head == NULL) return head;
        // write your code here
        ListNode * midNode = findMidNode(head);
        ListNode * rightHead = midNode->next;
        midNode->next = NULL;
        
        ListNode *lhead = sortList(head);
        ListNode *rhead = sortList(rightHead);
        
        ListNode *res = merge(lhead,rhead);
        return res;
    }
};
ListNode * createList(vector<int> v){
    ListNode *dummy = new ListNode(0),*curr=dummy,*node;
    for(int i=0;i<v.size();i++){
   	node = new ListNode(v[i]); 
	curr->next = node;
	curr = node;
    }
    return dummy->next;
}
void printList(ListNode *head){
    ListNode *curr = head;
    while(curr != NULL){
   	cout<<curr->val<<","; 
	curr = curr->next;
    }
}
//int main(){
//    vector<int>v;
//    v.push_back(22);
//    v.push_back(25);
//    v.push_back(22);
//    v.push_back(42);
//    v.push_back(22);
//    v.push_back(28);
//    v.push_back(22);
//    v.push_back(92);
//    v.push_back(22);
//    v.push_back(62);
//    v.push_back(21);
//
//    ListNode * head = createList(v); 
//    printList(head);
////    sortList(head);
//    Solution sln;
//    ListNode * res = sln.sortList(head);
//
//    printList(res);
//    return 0;
//}


