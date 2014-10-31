// https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array/
//

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n <= 0) {
            return 0;
        }
        
        int last, i;
        
        for (i = 1, last = 1; i < n; i++) {
            if (A[i] != A[i - 1]) {
                A[last] = A[i];
                last++;
            }
        }
        
        return last;
    }
};
