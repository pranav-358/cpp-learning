class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> reserved;
        for (const auto& seat : reservedSeats) {
            int row = seat[0];
            int col = seat[1];
            if (col >= 2 && col <= 9) {
                reserved[row] |= (1 << col);
            }
        }
        int total_groups = 2 * (n - reserved.size());
        const int left_mask   = (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5); 
        const int right_mask  = (1 << 6) | (1 << 7) | (1 << 8) | (1 << 9); 
        const int middle_mask = (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7); 
        
        for (const auto& [row, mask] : reserved) {
            bool left_free   = (mask & left_mask) == 0;
            bool right_free  = (mask & right_mask) == 0;
            bool middle_free = (mask & middle_mask) == 0;
            
            if (left_free && right_free) {
                total_groups += 2;
            } else if (left_free || right_free || middle_free) {
                total_groups += 1;
            }
        }
        return total_groups;
    }
};