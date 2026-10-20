
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int points = 0;
        int l = k - 1;
        int r = n - 1;

        for (int i = 0; i < k; i++) {
            points += cardPoints[i];
        }

        int max_points = points;

        while (l >= 0) {
            points = points - cardPoints[l];
            points = points + cardPoints[r];

            max_points = max(max_points, points);

            l--;
            r--;
        }

        return max_points;
    }
};
