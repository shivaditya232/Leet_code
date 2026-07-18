#include<iostream>
using namespace std;

int main(){
    vector<int> nums={1,1,0,1,1,1};
    int n=nums.size();
    int count=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=1){
            if(count>=max){
                max=count;
            }
            count=0;
        }
        else{
        count++;
        }
    }
    if(count>=max){
                max=count;
            }
    cout<<max;

    return 0;
}