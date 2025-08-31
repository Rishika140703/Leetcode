class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans;
        int r = n - 1;

        while (r >= 0) {
            // skip spaces
            while (r >= 0 && s[r] == ' ') r--;

            if (r < 0) break;

            int l = r;
            while (l >= 0 && s[l] != ' ') l--;

            // add the word [l+1, r]
            ans.append(s.substr(l + 1, r - l));
            ans.push_back(' ');

            r = l;
        }

        if (!ans.empty() && ans.back() == ' ')
            ans.pop_back();

        return ans;
    }
};
