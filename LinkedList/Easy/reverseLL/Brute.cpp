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
    /*Function to reverse a linked list
    Using the 3-pointer approach*/
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        vector <int> arr{};

        while(temp != nullptr){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        reverse(arr.begin() , arr.end());
        temp = head;
        int i = 0; 

        while(temp != nullptr){
            temp->data = arr[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};

// Function to print the linked list
void printLinkedList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list with
    // Values 1, 3, 2, and 4
    ListNode* head = new ListNode(1);
    head->next = new ListNode(3);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(4);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Solution instance
    Solution sol;
    // Reverse the linked list
    head = sol.reverseList(head);

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}
