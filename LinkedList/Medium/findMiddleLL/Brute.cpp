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
        ListNode* temp = head;
        int count = 0;
        
        // Traverse the linked list
        while(temp != NULL) {
            count += 1; // Increment the count by one 
            temp = temp-> next;
        }
        
        int midPosition = (count)/2 + 1;
        
        ListNode* middleNode = head;
        for(int i = 1; i < midPosition; i++) {
            middleNode = middleNode -> next;
        }
        
        return middleNode;
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
