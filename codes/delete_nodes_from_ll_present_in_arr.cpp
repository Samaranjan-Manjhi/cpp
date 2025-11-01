#include <unordered_set>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
     public:
          ListNode* modifiedList(vector<int>& nums, ListNode* head) 
          {
               unordered_set<int> toRemove(nums.begin(), nums.end());

               // Handle head removal
               while (head != nullptr && toRemove.count(head->val)) {
                    head = head->next;
               }

               if (head == nullptr) return nullptr;

               ListNode* current = head;
               while (current->next != nullptr) {
                    if (toRemove.count(current->next->val)) {
                         current->next = current->next->next;
                    } else {
                         current = current->next;
                    }
               }

               return head;
          }
};

// Helper function to create a linked list from a vector
ListNode* createList(const vector<int>& values) {
     ListNode* head = nullptr;
     for (int i = values.size() - 1; i >= 0; --i) {
          head = new ListNode(values[i], head);
     }
     return head;
}

// Example usage
int main() {
     Solution solution;
     vector<int> nums = {1, 2, 3};
     ListNode* head = createList({1, 2, 3, 4, 5});

     // Call modifiedList to remove nodes
     ListNode* modifiedHead = solution.modifiedList(nums, head);

     // Print the modified list (helper function)
     ListNode* curr = modifiedHead;
     while (curr != nullptr) {
          cout << curr->val << " ";
          curr = curr->next;
     }
     cout << endl;

     return 0;
}

