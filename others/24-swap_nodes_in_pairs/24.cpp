#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode dum(0);
        dum.next = head;
        ListNode* prev = &dum;
        ListNode* curr = head;

        while (curr && curr->next) {
            ListNode* first = curr;
            ListNode* second = curr->next;
            prev->next = second;
            first->next = second->next;
            second->next = first;
            prev = first;
            curr = first->next;

        }
        return dum.next;
    }
};

int main() {
    ListNode* n4 = new ListNode(4);
    ListNode* n3 = new ListNode(3, n4);
    ListNode* n2 = new ListNode(2, n3);
    ListNode* n1 = new ListNode(1, n2);

    Solution sol;
    ListNode* head = sol.swapPairs(n1);
    ListNode* temp = head;
    while (temp) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}