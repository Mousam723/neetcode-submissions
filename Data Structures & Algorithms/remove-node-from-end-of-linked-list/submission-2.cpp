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
    int sizee(ListNode* h){
        int s=0;
        while(h){
            s++;
            h=h->next;
        }
        return s;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s=sizee(head);
        int n1=s-n-1;
        if(n1<0) return head->next;
        ListNode* t=head;
        while(n1>0){
            t=t->next;
            cout<<t->val<<" ";
            n1--;
        }
        t->next=t->next->next;
        return head;
    }
};
