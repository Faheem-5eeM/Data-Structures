#include<bits/stdc++.h>
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
    //Function to remove the nth node from end
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return NULL;
        }
        int cnt = 0;
        ListNode* temp = head;

        // Count the number of nodes 
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        /*If N equals 
        the total number of nodes
        delete the head*/
        if (cnt == n) {
            ListNode* newhead = head->next;
            delete (head);
            return newhead;
        }

       /* Calculate the position 
        of the node to delete (res)*/
        int res = cnt - n;
        temp = head;

        /*Traverse to the node 
        just before the one to delete*/
        while (temp != NULL) {
            res--;
            if (res == 0) {
                break;
            }
            temp = temp->next;
        }

        //Delete the Nth node from the end
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete (delNode);
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
    ListNode* head = new ListNode(arr[0]);
    head->next = new ListNode(arr[1]);
    head->next->next = new ListNode(arr[2]);
    head->next->next->next = new ListNode(arr[3]);
    head->next->next->next->next = new ListNode(arr[4]);

    //Solution instance
    Solution sol;
    head = sol.removeNthFromEnd(head, N);
    printLL(head);

    return 0;
}