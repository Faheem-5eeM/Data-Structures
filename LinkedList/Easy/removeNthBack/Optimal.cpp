#include<bits/stdc++.h>
using namespace std;
//Definition of 
//Single Linked List
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
    //Function to remove the nth node from end
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //Creating pointers
        ListNode* fastp = head;
        ListNode* slowp = head;

        /*Move the fastp pointer 
        N nodes ahead*/
        for (int i = 0; i < n; i++) {
            fastp = fastp->next;
        }

        /*If fastp becomes NULL
        the Nth node from the 
        end is the head*/
        if (fastp == NULL) {
            return head->next;
        }

        /*Move both pointers 
        Until fastp reaches the end*/
        while (fastp->next != NULL) {
            fastp = fastp->next;
            slowp = slowp->next;
        }

        //Delete the Nth node from the end
        ListNode* delNode = slowp->next;
        slowp->next = slowp->next->next;
        delete delNode;
        return head;
    }
};

//Function to print the linked list
void printLL(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int N = 3;
    //Creation of linked list
    ListNode* head = new ListNode(arr[0]);
    head->next = new ListNode(arr[1]);
    head->next->next = new ListNode(arr[2]);
    head->next->next->next = new ListNode(arr[3]);
    head->next->next->next->next = new ListNode(arr[4]);

    // Solution instance
    Solution sol;
    head = sol.removeNthFromEnd(head, N);
    printLL(head);

    return 0;
}