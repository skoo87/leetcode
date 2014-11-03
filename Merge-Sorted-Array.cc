// https://oj.leetcode.com/problems/merge-sorted-array/
//
class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        // 依次将B中的元素插入到A中合适的位置
        int j = 0;
        
        for (int i = 0; i < n; i++) {
            int e = B[i];
            
            // 选择A中第一个比e大的元素位置
            for ( ; j < m; j++) {
                if (A[j] > e) {
                    // 将j位置及以后的所有元素向后移动一个位置
                    for (int k = m - 1; k >= j; k--) {
                        A[k+1] = A[k];
                    }
                    
                    // 将e填入j位置
                    A[j] = e;
                    
                    // 由于向后移动一个位置，所以A的长度应该加1
                    m++;
                    break;
                } 
            }
            
            // 没有在A中找到比e大的元素
            if (j == m) {
                A[j] = e;
                m++;
                j++;
            }
        }
    }
};
