
 
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        ListNode* iterator = new ListNode();

        iterator = head->next;
        while (iterator)
        {
            int sum = 0;
            while (iterator->val != 0)
            {
                sum += iterator->val;
                iterator = iterator->next;
            }

            current->next = new ListNode(sum);
            current = current->next;

            iterator = iterator->next;
        }
        return dummy->next
    }
};