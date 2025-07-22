#include <bits/stdc++.h>
using namespace std;

//Definition of singly linked list:
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
    // Function to get the middle node of linked list
    ListNode* middleOfLinkedList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Until the fast pointers reaches NULL or the last node
        while(fast != NULL && fast->next != NULL) {
            // Move slow pointer by one step
            slow = slow-> next;
            
            // Move fast pointer by two steps
            fast = fast->next-> next;
        }
        
        return slow;
    }
};

// Utility Function to print the linked list
void printLinkedList(ListNode* head) {
    ListNode* temp = head;
    
    // Traverse the linked list and print each node's value
    while (temp != nullptr) { 
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating a simple linked list
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);
    ListNode* fifth = new ListNode(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    
    // Creating an object of Solution class
    Solution sol;
    
    // Function call to get the middle node of linked list 
    ListNode* middleNode = sol.middleOfLinkedList(head);
    
    printLinkedList(head);
    cout << "The middle node is: " << middleNode->val << endl;

    return 0;
}
