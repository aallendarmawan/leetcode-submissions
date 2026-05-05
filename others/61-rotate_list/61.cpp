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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        int ln_len = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            ln_len++;
        }

        k%=ln_len;
        if (k == 0) return head;

        tail->next = head;

        int rotations = ln_len - k;
        ListNode* new_tail = head;
        
        while (--rotations) {
            new_tail = new_tail->next;
        }

        ListNode* new_head = new_tail->next;
        new_tail->next = nullptr;

        return new_head;
    }
};

int main() {
    ListNode* n5 = new ListNode(5);
    ListNode* n4 = new ListNode(4, n5);
    ListNode* n3 = new ListNode(3, n4);
    ListNode* n2 = new ListNode(2, n3);
    ListNode* n1 = new ListNode(1, n2);

    Solution sol;
    ListNode* head = sol.rotateRight(n1,2);
    ListNode* temp = head;
    while (temp) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}