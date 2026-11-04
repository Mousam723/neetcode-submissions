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
    ListNode* rev(ListNode* l){
        ListNode* curr=l,* prev=NULL;
        while(curr){
            ListNode* nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1=l1;
        ListNode* h2=l2;

        ListNode* t=new ListNode(0);
        ListNode* ans=t;

        int c=0;
        while(h1 && h2){
            int v=h1->val+h2->val+c;
            c=v/10;
            v=v%10;
            ListNode* valu=new ListNode(v);
            cout<<valu->val<<endl;
            t->next=valu;
            t=t->next;
            h1=h1->next;
            h2=h2->next;
        }
        while(h1){
            int v=h1->val+c;
            c=v/10;
            v=v%10;
            ListNode* valu=new ListNode(v);
            t->next=valu;
            t=t->next;
            h1=h1->next;
        }

        while(h2){
            int v=h2->val+c;
            c=v/10;
            v=v%10;
            ListNode* valu=new ListNode(v);
            t->next=valu;
            t=t->next;
            h2=h2->next;
        }
        if(c!=0){
            ListNode* nd=new ListNode(c);
            t->next=nd;
            t=t->next;
        }

        // ans=rev(ans->next);
        return ans->next;
    }
};
