class Solution {
public:
    bool isPowerOfTwo(int n) {
        int copy=n;
        bool flag=false;
        while(copy>2){
            if(copy%2==0){
                flag=true;
                
            }
            else{
                flag=false;
                break;
            }
            copy=copy/2;
        }
        if(n==1 || n==2){
            return true;
        }
        if(flag){
            return true;
        }
        else{
            return false;
        }
    }
};