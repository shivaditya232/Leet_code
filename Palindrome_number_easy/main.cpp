#include <climits>;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            int copy=x;
            int revNum=0;
            while(x>0){
                int digit=x%10;
                if(revNum > INT_MAX/10){
                    return false;
                }
                revNum=revNum*10+digit;
                x=x/10;
            }
            if(revNum==copy){
                return true;
            }
            else{
                return false;
            }
        }
    }
};