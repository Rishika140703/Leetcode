class Solution {
public:
    int myAtoi(string s) {
        // int ans=0;
        // char sign = '+';
        
        // for(int i=0; i< s.size(); i++){
        //     if(s[i] == ' ') continue;
        //     if(s[i] == '-' ){
        //         char sign = '-';
        //     } else if(s[i] == '+'){
        //         char sign = '+';
        //     }
        //     if(s[i] == 0){
        //         continue;
        //         ans += (int)sign + s[i];
        //         if(s[i] == ' ' || s[i] == '+' || s[i] == '-' || s[i] == '.'){
        //             return ans;
        //         }
        //     }
        //     ans += (int)sign + s[i];

        // }
        // return ans;
        int x;
        stringstream(s) >> x;
        return x;
        
    }
};