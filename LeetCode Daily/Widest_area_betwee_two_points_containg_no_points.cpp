#include <vector>
#include <algorithm>

using namespace std;

int widestVerticalArea(vector<vector<int>>& points) {
    sort(points.begin(), points.end());
    int maxWidth = 0;
    for (int i = 1; i < points.size(); ++i) {
        int width = points[i][0] - points[i - 1][0];
        maxWidth = max(maxWidth, width);
    }
    return maxWidth;
}
