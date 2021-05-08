//https://leetcode.com/problems/first-unique-character-in-a-string/
//tc - O(n) twice
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]+= 1;
        }
        int ans = INT_MAX;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1) return i;
        }
        return -1;
    }
};