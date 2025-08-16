
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



// Find the starting point in LL-----------------------------------------------------------


// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         if(head == NULL || head->next == NULL)
//         return NULL;
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow==fast){
//                 slow=head;
//                 while(slow!=fast){
//                     slow=slow->next;
//                     fast=fast->next;
//                 }
//                 return slow;
//             }
//         }
//         return NULL;
//     }
// };



// Palindrome Linked List---------------------------------------------------------------------

// BRUTE--------

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
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode *temp = head;
//         stack<int> st;
//         while(temp!=NULL){
//             st.push(temp->val);
//             temp=temp->next;
//         }
//         temp=head;
//         while(temp!=NULL){
//             if(temp->val!=st.top()) return false;
//             temp=temp->next;
//             st.pop();
//         }
//         return true;
//     }
// };


// OPTIMAL--------

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
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         if(!head || !head->next) return true;
//         ListNode *slow = head;
//         ListNode *fast = head;
//         while(fast->next!=NULL && fast->next->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         ListNode *temp = slow, *front=slow, *back=NULL;
//         while(temp!=NULL){
//             front = temp->next;
//             temp->next = back;
//             back=temp;
//             temp=front;
//         }
//         front=head;
//         while(back->next!=NULL){
//             if(front->val!=back->val) return false;
//             front=front->next;
//             back=back->next;
//         }
//         return true;
//     }
// };



// Odd Even Linked List---------------------------------------------------------------------


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
// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(!head || !head->next) return head;
//         ListNode *evenHead = head->next;
//         ListNode *even = head->next , *odd = head;
//         while(even!=NULL && even->next!=NULL){
//             odd->next=odd->next->next;
//             even->next=even->next->next;
//             odd=odd->next;
//             even=even->next;
//         }
//         odd->next=evenHead;
//         return head;
//     }
// };



// Remove Nth Node From End of List---------------------------------------------------------------------

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
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head==NULL || head->next == NULL) return NULL;
//         ListNode *fast = head, *slow=head;
//         for(int i=0;i<n;i++){
//             fast=fast->next;
//         }
//         if(!fast) return head->next;
//         while(fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next;
//         }
//         slow->next=slow->next->next;
//         return head;
//     }
// };



// Delete the Middle Node of a Linked List---------------------------------------------------------------------

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
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head == NULL || head->next == NULL) return NULL;
//         ListNode *slow=head;
//         ListNode *fast=head->next->next;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         slow->next=slow->next->next;
//         return head;
//     }
// };



// Intersection of Two Linked Lists---------------------------------------------------------

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* temp = headA;
//         unordered_map<ListNode*,int> mpp;
//         while(temp!=NULL){
//             mpp[temp] = 1;
//             temp = temp->next;
//         }
//         temp = headB;
//         while(temp!=NULL){
//             if(mpp.find(temp)!=mpp.end()) return temp;
//             temp = temp->next;
//         }
//         return NULL;
//     }
// };

// OPTIMAL------------------------------------

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         if(headA==NULL || headB==NULL) return NULL;
//         ListNode* t1 = headA;
//         ListNode* t2 = headB;
//         while(t1!=t2){
//             t1=t1->next; 
//             t2=t2->next;
//             if(t1==t2) return t1;
//             if(t1==NULL) t1 = headB;
//             if(t2==NULL) t2 = headA;
//         }
//         return t1;
//     }
// };

