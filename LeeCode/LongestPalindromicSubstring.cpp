#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string maxSizePalindrome = "";
        for(int i=1;i<=s.length();i++){
            for(int j=0;j<s.length()-(i-1);j++){
                if(isPalindrome(s.substr(j,i)) and maxSizePalindrome.length() < i){
                    maxSizePalindrome = s.substr(j,i);
                }
            }
        }
        return maxSizePalindrome;
    }
    bool isPalindrome(string s){
        bool returnValue = true;
        for(int i=0;i<s.length()/2;i++){
            if(s[i] != s[s.length()-1-i]){
                returnValue = false;break;
            }
        }
        return returnValue;
    }
};

int main(){
    Solution *sol = new Solution();
    cout << sol->longestPalindrome("babad");
    return 0;
}