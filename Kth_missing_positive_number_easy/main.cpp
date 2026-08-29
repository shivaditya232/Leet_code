#include<iostream>
using namespace std;
int main(){
    vector<int> arr={2,3,4,7,11};
    int k=5;
    /*2,3,4,7,11*/
    /*0,1,2,3,4*/
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        int ele=arr[mid];
        int missingEle=ele-(mid+1);
        if(missingEle>k){
            high=mid+1;
        }
        else{
            low=mid-1;
        }
    }
    return k+high+1;
    return 0;
}