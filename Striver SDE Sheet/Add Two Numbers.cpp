/*
 *https://leetcode.com/problems/add-two-numbers/
 * */
//O(n) solution



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode *temp =ans;
        int extra=0;
        while(l1!=NULL || l2!=NULL){
            if(l1!=NULL && l2!=NULL)
            {
                ans->val=(l1->val+l2->val + extra)%10;
                extra=(l1->val+l2->val + extra)/10;
                l1=l1->next;
                l2=l2->next;
            }
            else{
                int l1_val=0,l2_val=0;
                if(l1){
                    l1_val=l1->val;
                    l2_val=0;
                    l1=l1->next;
                }
                if(l2){
                    l2_val=l2->val;
                    l1_val=0;
                    l2=l2->next;
                }
                ans->val=(l1_val+l2_val+extra)%10;
                extra=(l1_val+l2_val+extra)/10;
                    
            }
            
            if(l1 || l2 || extra>0){
                ans->next=new ListNode();
            }
            else{
                    ans->next=NULL;
            }
            ans=ans->next;
        }
        if(ans)    
        {
            ans->val=extra;
            ans->next=NULL;
        }
        return temp;
    }
};

