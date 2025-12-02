class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        const int MOD = 1e9 + 7;
        // Map to store frequency of points at each y-coordinate
        // Key: y, Value: count of points
        unordered_map<int, int> y_counts;
        for (const auto& p : points) {
            y_counts[p[1]]++;
        }
        long long total_trapezoids = 0;
        long long accumulated_segments = 0;
        // Iterate through each y-level
        for (auto const& [y, count] : y_counts) {
            // We need at least 2 points to form a horizontal line
            if (count < 2) continue; 
            // Calculate number of segments at this level: nC2 = n*(n-1)/2
            long long n = count;
            long long current_segments = (n * (n - 1)) / 2;
            // Add trapezoids formed by connecting current level segments 
            // with all previously found segments
            long long new_combinations = (current_segments % MOD) * (accumulated_segments % MOD);
            total_trapezoids = (total_trapezoids + new_combinations) % MOD;
            // Add current segments to the pool for future levels
            accumulated_segments = (accumulated_segments + current_segments) % MOD;
        }
        return (int)total_trapezoids;
    }
};