class Solution {
public:
    int maxDepth(string s) {
        int currentDepth =0;
        int maxDepth = 0;
        for(auto c: s){
            if(c == '('){
                currentDepth++;
            }else if(c == ')'){
                currentDepth--;
            }
            maxDepth = max(currentDepth,maxDepth);
        }
        return maxDepth;
        
    }
};



