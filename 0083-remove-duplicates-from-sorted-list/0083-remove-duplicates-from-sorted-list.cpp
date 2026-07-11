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

// Using Extra Space
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

    //     vector<int>ans;
    //     ans.push_back(head->val);
    //     ListNode *curr = head->next;
    //     while(curr!=NULL)
    //     {
    //         if(ans[ans.size()-1]!= curr->val)
    //         ans.push_back(curr->val);
    //         curr = curr->next;
    //     }

    //     curr = head;
    //     int index=0;
    //     while(index<ans.size())
    //     {
    //         curr->val = ans[index];
    //         index++;
    //         curr = curr->next;
    //     }
    //     int size = ans.size()-1;
    //     curr = head;
    //     while(size--)
    //     {
    //         curr = curr->next;
    //    } 

    //    curr->next = NULL;
    //    return head;




      // Without using extra space


      if(head==NULL)
      return NULL;

      ListNode *curr = head->next;
      ListNode *prev = head;

      while(curr!=NULL)
      {
        if(curr->val == prev->val)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            prev = prev->next;
            curr = curr->next;
        }
      }  
      return head;
        
    }
};