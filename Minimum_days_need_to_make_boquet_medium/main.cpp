#include<iostream>
using namespace std;

bool check(vector<int> &bloomDay,int k,int currentDay,int m){
    int count=0;
    int boquet=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=currentDay){
            count++;
            if(count==k){
                boquet+=1;
                count=0;
            }
        }
        else{
            count=0;
        }
    }
    if(boquet>=m){
        return true;
    }
    else{
        return false;
    }
}
int max(vector<int> &bloomDay){
    int max=INT_MIN;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]>max){
            max=bloomDay[i];
        }
    }
    return max;
}
int main(){
    vector<int> bloomDay={1,10,3,10,2};
    int m=3;
    int k=1;
    if(k>bloomDay.size()){
        return -1;
    }
    int high=max(bloomDay);
    int low=1;
    while(low<=high){
        int mid=(low+high)/2;
        if(check(bloomDay,k,mid,m)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;

    return 0;
}