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
    // Function to delete middle node of linked list
    ListNode* deleteMiddle(ListNode* head) {
        /* Edge case: if the list is empty 
         * or has only one node, return null */
        if (head == nullptr || head->next == nullptr) {
            delete head;
            return nullptr;
        }

        // Temporary node to traverse
        ListNode* temp = head;
        
        // Variable to store number of nodes
        int n = 0;
        
        /* Loop to count the number of nodes 
        in the linked list */
        while (temp != nullptr) {
            n++;
            temp = temp->next;
        }
        
        // Index of the middle node
        int middleIndex = n / 2;
        
        // Reset temporary node 
        // to beginning of linked list
        temp = head;
        
        /* Loop to find the node 
        just before the middle node */
        for (int i = 1; i < middleIndex; i++) {
            temp = temp->next;
        }
        
        // If the middle node is found
        if (temp->next != nullptr) {
            // Create pointer to the middle node
            ListNode* middle = temp->next;
            
            // Adjust pointers to skip middle node
            temp->next = temp->next->next;
            
            /* Free the memory allocated 
             * to the middle node */
            delete middle;
        }
        
        // Return head
        return head;
    }
};

// Function to print the linked list
void printLL(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
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
