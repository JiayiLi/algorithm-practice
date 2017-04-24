// 36:整数排序 II

// 描述：给一组整数，按照升序排序。使用归并排序，快速排序，堆排序或者任何其他 O(n log n) 的排序算法。

// 样例：
// 给出：[3, 2, 1, 4, 5], 
// 排序后的结果为 [1, 2, 3, 4, 5]


class Solution {
public:
    /**
     * @param A an integer array
     * @return void
     */
    void sortIntegers2(vector<int>& A) {
        quick_sort(A, 0, A.size() - 1);
    }
    void quick_sort(vector<int> &A, int start, int end) {
        if (start >= end) return;
        int pivot = end;
        int pos = partition(A, start, end, pivot);
        quick_sort(A, start, pos - 1);
        quick_sort(A, pos + 1, end);
    }
    int partition(vector<int> &A, int start, int end, int pivot) {
        int left = start, right = end;
        while (true) {
            while (left < right && A[left] < A[pivot]) ++left;
            while (left < right && A[right] >= A[pivot]) --right;
            if (left == right) break;
            swap(A[left], A[right]);
        }
        swap(A[left], A[end]);
        return left;
    }
};