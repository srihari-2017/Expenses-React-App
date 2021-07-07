#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        int temresult = 0;
        map<char,int> track;
        for(int index=0;index<s.length();index++){
            if(track.find(s[index]) == track.end()){
                track[s[index]] = index;
                temresult++;
            }
            else{
                index = track[s[index]]+1;
                track.clear();
                track[s[index]] = index;
                temresult=1;
            }
            result = max(temresult,result);
        }
        return result;
    }
};