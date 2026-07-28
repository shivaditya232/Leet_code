#include<iostream>
using namespace std;
//only for positive elements
int main(){
    vector<int> nums={1,2,3,4,5};
    int k=3;
    int slowPointer=0;
        int fastPointer=0;
        int sum=0;
        int count=0;
        while(slowPointer<nums.size() && fastPointer<nums.size()){
            sum+=nums[fastPointer];
            if(sum==k){
                slowPointer++;
                fastPointer=slowPointer;
                count+=1;
                sum=0;
            }
            else if(sum<k){
                fastPointer++;
            }
            else{
                slowPointer++;
                sum=0;
            }
            
        }
    return 0;
}