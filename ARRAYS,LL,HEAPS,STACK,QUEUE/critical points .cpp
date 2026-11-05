/*class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2, -1);

        if(head == NULL || head->next == NULL || head->next->next == NULL)
            return ans;

        int i = 2;
        int count = 0;

        ListNode* prev = head;
        ListNode* temp = head->next;
        ListNode* n = temp->next;

        priority_queue<int> pqmax;
        priority_queue<int, vector<int>, greater<int>> pqmin;

        while(n != NULL) {
            int p = prev->val;
            int cur = temp->val;
            int nn = n->val;

            if((cur < nn && cur < p) || (cur > nn && cur > p)) {
                count++;
                pqmin.push(i);
                pqmax.push(i);
            }

            i++;
            prev = temp;
            temp = n;
            n = n->next;
        }

        if(count < 2)
            return ans;

        int last = pqmax.top();
        int first = pqmin.top();

        ans[1] = last - first;
        vector<int> positions;
        while(!pqmin.empty()) {
            positions.push_back(pqmin.top());
            pqmin.pop();
        }

        int mini = INT_MAX;
        for(int j = 1; j < positions.size(); j++) {
            mini = min(mini, positions[j] - positions[j-1]);
        }

        ans[0] = mini;

        return ans;
    }
};*/