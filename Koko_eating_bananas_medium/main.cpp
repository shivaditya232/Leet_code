#include<iostream>
using namespace std;
int hour(int speed,vector<int> piles){
    int hours=0;
    for(int i=0;i<piles.size();i++){
        hours+=ceil((double)piles[i]/speed);
    }
    return hours;
}
int main(){
    vector<int> piles={3,6,7,11};
    int h=8;
    int max=INT_MIN;
    for(int i=0;i<piles.size();i++){
        if(piles[i]>max){
            max=piles[i];
        }
    }
    int low=1;
    int high=max;
    int ans=max;
    while(low<=high){
        int mid=(low+high)/2;
        if(hour(mid,piles)<=h){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    
    return 0;
}