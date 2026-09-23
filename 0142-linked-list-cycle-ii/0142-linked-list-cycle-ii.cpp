/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//            ListNode* checkCycle(ListNode* slow, ListNode* fast) {

//             while(fast!=NULL && fast -> next!= NULL){
//                 slow = slow->next;
//                 fast = fast->next->next;
//                 if(slow==fast){
//                     return slow;
//                 }
//              }
//              return NULL;
//            }
//      ListNode *detectCycle(ListNode *head) {

        
//         ListNode* slow = head;
//         ListNode* fast = head;

//         slow = head;
//           while(slow!=fast){
//             slow = slow->next;
//             fast = fast->next;
//           }
//           return slow;
//         }
      
//     };


//     class Solution { 
// public: 

//     ListNode* detectCycle(ListNode* head) { 

//         ListNode* slow = head;
//         ListNode* fast = head;

//         bool checkCycle(ListNode* slow, ListNode* fast) { 

//             while(fast != NULL && fast->next != NULL) { 

//                 slow = slow->next; 
//                 fast = fast->next->next; 

//                 if(slow == fast) { 
//                     return true; 
//                 } 
//             } 

//             return false; 
//         }

//         if(checkCycle(slow, fast)) {

//             slow = head;

//             while(slow != fast) { 
//                 slow = slow->next; 
//                 fast = fast->next; 
//             } 

//             return slow;
//         }

//         return NULL;
//     } 
// };


class Solution {
public:

    bool checkCycle(ListNode* slow, ListNode* fast) {

        while(fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                return true;
            }
        }

        return false;
    }

    ListNode* detectCycle(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {

                slow = head;

                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;
            }
        }

        return NULL;
    }
};
