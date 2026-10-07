
class Solution {
    struct DSU {
        vector<int> parent;
        DSU(int n) {
            parent.resize(n + 1);
            iota(parent.begin(), parent.end(), 0);
        }

        int find(int i) {
            if (i == parent[i]) return i;
            return parent[i] = find(parent[i]);
        }

        void unite(int u, int v) {
            parent[u] = v;
        }
    };

public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = deadline.size();

        // Pair jobs: {profit, deadline}
        vector<pair<int, int>> jobs(n);
        int maxDeadline = 0;
        for (int i = 0; i < n; i++) {
            jobs[i] = {profit[i], deadline[i]};
            maxDeadline = max(maxDeadline, deadline[i]);
        }

        // Sort jobs by profit in descending order
        sort(jobs.rbegin(), jobs.rend());

        DSU dsu(maxDeadline);
        int countJobs = 0, totalProfit = 0;

        for (int i = 0; i < n; i++) {
            int p = jobs[i].first;
            int d = jobs[i].second;

            // Find maximum available slot <= deadline
            int availableSlot = dsu.find(d);

            if (availableSlot > 0) {
                countJobs++;
                totalProfit += p;
                // Point this slot to the slot before it
                dsu.unite(availableSlot, dsu.find(availableSlot - 1));
            }
        }

        return {countJobs, totalProfit};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna