class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
        
            for(int i=-n/2; i<=n/2; i++){
                if(n%2 == 0 && i == 0) continue;
            arr.push_back(i);
        }
        return arr;

        

        
        

    }
};