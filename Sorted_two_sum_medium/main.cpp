#include<iostream>
using namespace std;
int main(){
    vector<int> list={2,7,11,15};
    int l=0;
    int r=list.size()-1;
    int sum=9;
    while(l<r){
        if(list[l]+list[r]==sum){
            cout<<l<<r;
        }
        else if(list[l]+list[r]>sum){
            r--;
        }
        else if(list[l]+list[r]<sum){
            l++;
        }
    }
    return 0;
}