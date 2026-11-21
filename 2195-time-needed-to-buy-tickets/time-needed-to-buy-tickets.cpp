class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        queue<pair<int, int>>q;
        for(int i=0; i<tickets.size(); i++){
            q.push({tickets[i], i});
        }

        int count = 0;
        while(!q.empty()){
            int first = q.front().first;
            int second = q.front().second;
            q.pop();
            first--;
            count++;
            if(first == 0 && second == k){
                break;
            }
            else if(first == 0 && second != k){
                continue;
            }else{
                q.push({first, second});
            }
            
        }
    return count;
    }
};