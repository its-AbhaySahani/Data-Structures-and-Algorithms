#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int result = 0;

        // Calculate the prefix sum for each row
        for (int i = 0; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                matrix[i][j] += matrix[i][j - 1];
            }
        }

        // Iterate through all possible pairs of columns
        for (int col1 = 0; col1 < cols; ++col1) {
            for (int col2 = col1; col2 < cols; ++col2) {
                unordered_map<int, int> prefixSumCount;
                int currSum = 0;
                prefixSumCount[0] = 1;  // Handle submatrices starting from the beginning

                // Iterate through each row
                for (int row = 0; row < rows; ++row) {
                    int colSum = matrix[row][col2] - (col1 > 0 ? matrix[row][col1 - 1] : 0);
                    currSum += colSum;
                    result += prefixSumCount[currSum - target];
                    ++prefixSumCount[currSum];
                }
            }
        }

        return result;
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<vector<int>> matrix = {{0,1,0},{1,1,1},{0,1,0}};
    int target = 0;
    int result = solution.numSubmatrixSumTarget(matrix, target);

    cout << "Number of Submatrices: " << result << endl;

    return 0;
}
