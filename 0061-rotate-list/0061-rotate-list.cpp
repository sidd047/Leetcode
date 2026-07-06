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
    ListNode* rotateRight(ListNode* head, int k) {

    int steps;
    ListNode *pre = NULL;
    int count =1;

    // Check for Empty

    if(head==NULL || head ->next == NULL)
    {
        return head;
    }
        ListNode *temp = head;
        while(temp->next !=NULL)
        {
            count++;
            temp = temp->next;
            // pre = pre->next;
        }
        
        k=k % count;
        if(k==0){
            return head;
        }

        temp ->next = head;

        steps = count - k + 1;
        while(steps--)
        {
            pre = temp;
            temp = temp->next;
        }


        pre->next = NULL;
        return temp;
    }
};