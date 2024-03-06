#include <iostream>
#include <unordered_set>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    bool visited; // Flag to mark visited nodes
    ListNode(int x) : val(x), next(nullptr), visited(false) {}

// why we keep the visited as false in the constructor?
// Because we want to mark the visited nodes as true when we visit them. If we keep them as true, then we will not be able to detect the cycle.

};

bool hasCycle(ListNode *head) {
    ListNode *current = head;
    while (current != nullptr) {
        if (current->visited) {
            return true; // Cycle detected
        }
        current->visited = true;
        current = current->next;
    }
    return false; // No cycle detected
}

// Test cases
//head = [3,2,0,-4], pos = 1
int main() {
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;
    cout << hasCycle(head) << endl; // Output: true
    return 0;
}
