class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int hr=0; hr<12; hr++){
            for(int min=0; min<60; min++){
                if (std::bitset<32>(hr).count() + std::bitset<32>(min).count() == turnedOn){
                   ans.push_back(std::format("{}:{:02}", hr, min));
                }
            }
        }
        return ans;
    }
};