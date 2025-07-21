#include <bits/stdc++.h>

using namespace std;

// Definition of singly linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() {
        val = 0;
        next = NULL;
    }
    ListNode(int data1) {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1) {
        val = data1;
        next = next1;
    }
};

class Solution {
public:
    // Function to rearrange nodes 
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
            return head;

        /*Initialize pointers for odd 
        and even nodes and keep 
        track of the first even node*/
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* firstEven = head->next;

        // Rearranging nodes
        while (even && even->next) {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }

       /* Connect the last odd 
       node to the first even node*/
        odd->next = firstEven;

        return head;
    }
};

// Function to print the linked list
void printLL(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    // Create a linked list with given values
    vector<int> arr = {1, 3, 4, 2, 5, 6};
    ListNode* head = new ListNode(arr[0]);
    head->next = new ListNode(arr[1]);
    head->next->next = new ListNode(arr[2]);
    head->next->next->next = new ListNode(arr[3]);
    head->next->next->next->next = new ListNode(arr[4]);
    head->next->next->next->next->next = new ListNode(arr[5]);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLL(head);
    cout << '\n';

    // Rearrange the list and print it
    Solution solution;
    head = solution.oddEvenList(head);
    cout << "New Linked List: ";
    printLL(head);

    return 0;
}
