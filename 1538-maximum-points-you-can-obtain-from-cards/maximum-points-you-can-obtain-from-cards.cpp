class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int total_sum = 0;

        for (int i = 0; i < cardPoints.size(); i++) {
            total_sum += cardPoints[i];
        }

        // Window size = cards we leave behind
        int window_size = cardPoints.size() - k;

        int current_sum = 0;

        // Calculate first window
        for (int i = 0; i < window_size; i++) {
            current_sum += cardPoints[i];
        }

        // Minimum sum starts with first window
        int min_sum = current_sum;

        // Move the window
        for (int i = window_size; i < cardPoints.size(); i++) {

            // Add new element
            current_sum += cardPoints[i];

            // Remove old element
            current_sum -= cardPoints[i - window_size];

            // Update minimum
            min_sum = min(current_sum, min_sum);
        }

        return total_sum - min_sum;
    }
};