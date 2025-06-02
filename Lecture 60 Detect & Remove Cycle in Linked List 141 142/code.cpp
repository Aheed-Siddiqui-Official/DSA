#include <iostream>
using namespace std;

                                        // Program to detect a cycle

    //Definition for singly-linked list.
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                return true;
            }
        }
        return false;
    }
};

                                    // Program to return cycle where it exists

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                isCycle = true;
                break;
            }
        }
        if(!isCycle) {
            return NULL;
        }

        slow = head;
        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};

                                    // Program to remove the cycle

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                isCycle = true;
                break;
            }
        }
        if(!isCycle) {
            return NULL;
        }

        slow = head;
        ListNode* prev = NULL;// initializing previous pointer to store fast previous value
        while(slow != fast) {
            slow = slow->next;
            prev = fast;// putting fast previous value 
            fast = fast->next;
        }

        prev->next = NULL;// breaking the cycle by pointing previous to null

        return slow;
    }
};

int main() {
    return 0;
}