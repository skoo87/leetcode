// https://oj.leetcode.com/problems/pascals-triangle/
//

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > v;
        
        if (numRows == 0) {
            return v;
        }
        
        vector<int> tmp;
        tmp.push_back(1);
        v.push_back(tmp);
        
        if (numRows == 1) {
            return v;
        }
        
        for (int i = 2; i <= numRows; i++) {
            vector<int> tmp;
            
            // 填第一个1
            tmp.push_back(1);
            
            // 计算中间数字
            vector<int> pre = v.at(v.size() - 1);
            for (int j = 1; j < pre.size(); j++) {
                tmp.push_back(pre.at(j - 1) + pre.at(j));
            }
            
            // 填最后一个1
            tmp.push_back(1);
            
            v.push_back(tmp);
        }
        
        return v;
    }
};
