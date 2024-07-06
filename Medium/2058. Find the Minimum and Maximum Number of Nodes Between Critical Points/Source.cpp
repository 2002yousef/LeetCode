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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head->next;
        int index = 1;
        vector<int> critical_points = {};

        while (curr && curr->next)
        {
            if ((curr->val < prev->val && curr->val < curr->next->val) || (curr->val > prev->val && curr->val > curr->next->val))
            {
                critical_points.push_back(index);
            }

            prev = curr;
            curr = curr->next;
            index++;
        }

        if (critical_points.size() < 2)
        {
            return { -1,-1 };
        }

        int maximum = critical_points[critical_points.size() - 1] - critical_points[0], minimum = INT_MAX;

        for (int i = 1; i < critical_points.size(); i++)
        {
            minimum = min(minimum, critical_points[i] - critical_points[i - 1]);
        }

        return { minimum, maximum };

    }
};