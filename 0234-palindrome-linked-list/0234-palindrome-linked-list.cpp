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
    bool isPalindrome(ListNode* head) {
        
        if(head->next==NULL)
        return 1;
        // Count number of nodes
        int count = 0;
        ListNode *temp =head;
        while(temp)
        {
            count++;
            temp = temp->next;
        }

        count/=2;
        ListNode *curr = head, *prev = NULL;
        // Skip number of nodes
        while(count--)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;

        // Reverse the second Linked list, curr is pointing it
        ListNode *front;
        prev = NULL;

        while(curr)
        {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        // Prev is pointing to second list
        // Head is pointing to first list

        ListNode *head1 = head, *head2=prev;

      // Check Pallindrome
        while(head1)
        {
            if(head1->val!=head2->val)
            return 0;
            head1 = head1->next;
            head2 = head2->next;
        }
        return 1;

        
    }
};