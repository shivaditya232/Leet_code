class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) return false;

        map<int,int> cnt;
        for (int x : hand) cnt[x]++;

        for (auto& [card, c] : cnt) {
            int need = c;                       // copies of this card that must start a group
            if (need == 0) continue;
            for (int i = 0; i < groupSize; i++) {
                if (cnt[card + i] < need) return false;
                cnt[card + i] -= need;
            }
        }
        return true;
    }
};