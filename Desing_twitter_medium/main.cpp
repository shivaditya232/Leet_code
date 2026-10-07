class Twitter {
    int timer;
    unordered_map<int, vector<pair<int,int>>> tweets;
    unordered_map<int, unordered_set<int>> following;

public:
    Twitter() {
        timer = 0;
    }

    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({timer++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {
        vector<int> res;
        priority_queue<array<int,4>> pq;

        following[userId].insert(userId);

        for (int u : following[userId]) {
            if (!tweets[u].empty()) {
                int idx = tweets[u].size() - 1;
                pq.push({tweets[u][idx].first, tweets[u][idx].second, u, idx});
            }
        }

        while (!pq.empty() && res.size() < 10) {
            auto top = pq.top();
            pq.pop();
            res.push_back(top[1]);

            int u = top[2], idx = top[3];
            if (idx > 0) {
                pq.push({tweets[u][idx - 1].first, tweets[u][idx - 1].second, u, idx - 1});
            }
        }
        return res;
    }

    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        if (followerId != followeeId)
            following[followerId].erase(followeeId);
    }
};