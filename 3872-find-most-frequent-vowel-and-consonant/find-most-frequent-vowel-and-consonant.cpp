class Solution {
public:

    bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }

    int maxFreqSum(string s) {
        unordered_map<char, int> mp;
        int n = s.length();
        int vowelmaxfreq=0;
        int consmaxfreq=0;

        for(char ch : s){
            mp[ch]++;
        }

        for(auto &it : mp){
            if(isvowel(it.first)){
                vowelmaxfreq = max(vowelmaxfreq, it.second);
            }
            else{
                consmaxfreq = max(consmaxfreq, it.second);
            }

        }
        return consmaxfreq + vowelmaxfreq;


    }
};