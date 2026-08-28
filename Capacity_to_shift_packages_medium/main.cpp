#include<iostream>
using namespace std;
int sum(vector<int>& weights){
    int sum=0;
    for(int i=0;i<weights.size();i++){
        sum+=weights[i];
    }
    return sum;
}
int max(vector<int>& weights){
    int max=INT_MIN;
    for(int i=0;i<weights.size();i++){
        if(weights[i]>max){
            max=weights[i];
        }
    }
    return max;
}
int daysForWeight(vector<int>& weights,int cap){
    int day=1;
    int threshold=cap;
    for(int i=0;i<weights.size();i++){
        if(weights[i]<=threshold){
            threshold-=weights[i];
        }
        else{
            day+=1;
            threshold=cap;
            threshold-=weights[i];
        }
    }
    return day;
}
int main(){
    vector<int> weights={1,2,3,4,5,6,7,8,9,10};
    int days=5;
    int low=max(weights);
    int high=sum(weights);
    while(low<=high){
        int mid=(low+high)/2;
        if(daysForWeight(weights,mid)<=days){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return 0;
}