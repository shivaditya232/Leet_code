#include<iostream>
using namespace std;
int main(){
    vector<int> list={0,2,2,1,1,0};
    int low=0;
    int high=list.size()-1;
    int mid=low;
    
    while(mid<=high){
        if(list[mid]==0){
            swap(list[low],list[mid]);
            low++;
            mid++;
        }
        else if(list[mid]==1){
            mid++;
        }
        else if(list[mid==2]){
            swap(list[mid],list[high]);
            high--;
        }
    }
    return 0;
}