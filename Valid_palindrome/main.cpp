#include<string>

bool pali(string &clean,int l,int r){
    
    if(l>=r){
        return true;
    }
    else{
        if(clean[l]==clean[r]){
            return pali(clean,l+1,r-1);
        }
        else{
            return false;
        }
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i])){
                cleaned += tolower(s[i]);
            }
        }
        int r=cleaned.length()-1;
        int l=0;
        if(pali(cleaned,l,r)){
            return true;
        }
        else{
            return false;
        }
    }
};