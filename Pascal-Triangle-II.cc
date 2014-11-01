// https://oj.leetcode.com/problems/pascals-triangle-ii/
//
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v(rowIndex)
        
        v.push_back(1);
        
        if (rowIndex == 0) {
            return v;
        }
        
        for (int j = 1; j <= rowIndex; j++) {
            
            for (int i = v.size() - 1; i > 0; i--) {
                v[i] += v[i - 1];
            }
        
            v.push_back(1);
        }
        
        return v;
    }
};
