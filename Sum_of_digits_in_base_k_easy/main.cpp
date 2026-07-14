class Solution {
public:
    int sumBase(int n, int k) {
        if(n/k==0){
            return n%k;
        }
        else{
            return n%k+sumBase(n/k,k);
        }
    }
};