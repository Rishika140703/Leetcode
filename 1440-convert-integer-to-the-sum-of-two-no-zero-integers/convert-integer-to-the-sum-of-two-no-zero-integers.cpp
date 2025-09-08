class Solution {
public:
    bool no0(int n){
        while(n>1){
            if(n%10 == 0) return false;
            n /= 10; 
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        for(int i=1; i<n; i++){
            int a = i;
            int b = n-i;
            if(no0(a) == true && no0(b) == true){
                ans.push_back(a);
                ans.push_back(b);
                break;
            }
        }
        return ans;
    }
};