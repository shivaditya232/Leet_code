#include<iostream>
#include<cmath>
using namespace std;

int main(){
    vector<int> arr={-4,-1,0,3,10};
    int l=arr[0];
    int r=arr[arr.size()-1];
    vector<int> result(5);
    int index=4;
    while(l<r){
        if(abs(arr[l])<abs(arr[r])){
            result[index]=arr[r]*arr[r];
            r--;
            index--;
        }
        else{
            result[index]=arr[l]*arr[l];
            index--;
            l++;
        }
    }
    result[index]=arr[l]*arr[l];
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}