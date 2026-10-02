class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26, 0);
        for (char t : tasks)
            count[t - 'A']++;

        priority_queue<int> maxHeap;
        for (int c : count) {
            if (c > 0)
                maxHeap.push(c);
        }

        int time = 0;
        queue<pair<int,int>> cooldown; 

        while (!maxHeap.empty() || !cooldown.empty()) {
            time++;

            if (!maxHeap.empty()) {
                int cnt = maxHeap.top();
                maxHeap.pop();
                cnt--;
                if (cnt > 0) {
                    cooldown.push({cnt, time + n});
                }
            }
            

            if (!cooldown.empty() && cooldown.front().second == time) {
                maxHeap.push(cooldown.front().first);
                cooldown.pop();
            }
        }

        return time;
    }
};