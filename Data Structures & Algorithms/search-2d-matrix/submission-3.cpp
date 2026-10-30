class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //do binary search on each row's first element
        //find the element where the row you are in is less than the target
        //and the next row is larger than the target
        //then just do binary search on the columns of that row

        int lowRow = 0;
        int highRow = matrix.size() - 1;
        int targetRow = -1;

        while (lowRow <= highRow) {
            int midRow = lowRow + ((highRow - lowRow) / 2);
            if (matrix[midRow][0] <= target) {
                targetRow = midRow;
                lowRow = midRow + 1;
            } else {
                highRow = midRow - 1;
            }
        }

        int left = 0;
        int right = matrix[0].size() - 1;
        int mid;

        if (targetRow == -1) {
            return false;
        }

        while (left <= right) {
            mid = left + ((right - left) / 2);
            if (matrix[targetRow][mid] > target) {
                right = mid - 1;
            } else if (matrix[targetRow][mid] < target) {
                left = mid + 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
