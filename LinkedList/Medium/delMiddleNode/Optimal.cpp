#include <bits/stdc++.h>

using namespace std;

// Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};

class Solution {
public:
    // Function to delete the middle node of a linked list
    ListNode* deleteMiddle(ListNode* head) {
        /* If the list is empty or has only one node,
         * return NULL as there is no middle node to delete */
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        // Initialize slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        fast = head->next->next;

        // Move 'fast' pointer twice as fast as 'slow'
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Delete the middle node by skipping it
        slow->next = slow->next->next;
        return head;
    }
};

// Function to print the linked list
void printLL(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating a sample linked list: 
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    
    // Display the original linked list
    cout << "Original Linked List: ";
    printLL(head);

    // Deleting the middle node
    Solution solution;
    head = solution.deleteMiddle(head);

    // Displaying the updated linked list
    cout << "Updated Linked List: ";
    printLL(head);

    return 0;
}
