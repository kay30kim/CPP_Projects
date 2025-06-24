/*
problem:

Consider a social network with n users. You have been given vector<vector< int >> friends. where friends[i][0] and friends[i][1] are friends. A person 'a' can view profile of 'b' if he is friend or has a indirect common friend. Find out how many profiles can each user view.
*/

#include <bits/stdc++.h>

using namespace std;

int networkDFS(int user, vector<bool>& visited, const unordered_map<int, vector<int>>& network, vector<int>& ans, int count) {
    auto v = network.find(user);
    visited[user] = true;

    for(int frd : v->second) {
        if (!visited[frd]) {
            count = networkDFS(frd, visited, network, ans, count + 1);
        }
    }

    ans[user] = count + 1;

    return count;
}

std::vector<int> viewableProfiles(int n, vector<vector<int>>& friends) {
    vector<bool> visited(n, false);
    vector<int> ans(n, 0);

    unordered_map<int, vector<int>> network;

    for (const auto& pair : friends) {
        network[pair[0]].push_back(pair[1]);
        network[pair[1]].push_back(pair[0]);
    }

    for(int i=0; i<n; i++) {
        if (visited[i]) continue;

        int count = networkDFS(i, visited, network, ans, 0);
    }

    return ans;
}

int main(void) {
    vector<vector<int>> friends = {{0, 1}, {1, 2}, {2, 3}, {4, 5}, {6, 7}};
    int n = 8;

    vector<int> result = viewableProfiles(n, friends);
    
    for (int i = 0; i < n; ++i) {
        cout << "User " << i << " can view " << result[i] << " profiles." << endl;
    }

    return 0;
}