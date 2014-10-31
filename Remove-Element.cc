// https://oj.leetcode.com/problems/remove-element/
//

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int len = n;
        
AGAIN:
        for (int i = len - 1; i >= 0; i--) {
            // 删除尾部所有目标元素
            if (A[i] == elem) {
                len--;
                continue;
            }
            
            // 寻找一个目标元素，用最后一个元素去替换它
            for (int j = 0; j < len; j++) {
                if (A[j] == elem) {
                    A[j] = A[i];
                    len--;
                    goto AGAIN;
                }
            }
            
            // 没有目标元素了
            break;
        }
        
        return len;
    }
};
