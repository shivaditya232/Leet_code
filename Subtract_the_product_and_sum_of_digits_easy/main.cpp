class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int count=0;
        while(n>0){
            int dig=n%10;
            product*=dig;
            count+=dig;
            n=n/10;
        }
        return product-count;
    }
};