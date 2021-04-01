/*******

You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

*******/

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
        
       ListNode *r1=l1;
        ListNode *r2=l2;
        ListNode *res=new ListNode();
        ListNode *ans=res;
        
        int carry=0;
        
        while(r1!=NULL && r2!=NULL)
        {
            int x=r1->val+r2->val+carry;
            ListNode *temp=new ListNode(x%10);
            carry=x/10;
            r1=r1->next;
            r2=r2->next;
            res->next=temp;
            res=res->next;
        }
        while(r1!=NULL)
        {
            int x=r1->val+carry;
            ListNode *temp=new ListNode(x%10);
            carry=x/10;
            r1=r1->next;
            res->next=temp;
            res=res->next;
        }
        while(r2!=NULL)
        {
            int x=r2->val+carry;
            ListNode *temp=new ListNode(x%10);
            carry=x/10;
            r2=r2->next;
            res->next=temp;
            res=res->next;
        }
        while(carry>0)
        {
            ListNode *temp=new ListNode(carry%10);
            carry=carry/10;
            res->next=temp;
            res=res->next;
        }
        ans=ans->next;
        return ans;
    }
};
