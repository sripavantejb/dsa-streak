class Solution {
public:
    int maxDepth(string s) {
       
        int current_depth = 0;
        int max_depth = INT_MIN;

        for(auto c : s){
            if(c == '('){
                current_depth++;
            }else if(c == ')'){
                current_depth--;
            }

            max_depth = max(current_depth, max_depth);
        }

    return max_depth;
    }
};