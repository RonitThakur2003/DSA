
// Delete Node in a Linked List---------------------------------------------------------------

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
//     void deleteNode(ListNode* node) {
//        node->val=node->next->val;
//        node->next=node->next->next;
//     }
// };



// Middle of the Linked List---------------------------------------------------------------

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };



// Reverse Linked List---------------------------------------------------------------

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* curr=head;
//         ListNode* prev=NULL;
//         ListNode* nextNode=NULL;
//         if(head==NULL || head->next==NULL) return head;
//         while(curr!=NULL){
//             nextNode=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nextNode;
//         }
//         return prev;
//     }
// };


// Linked List Cycle---------------------------------------------------------------

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow==fast) return true;
//         }
//         return false;
//     }
// };