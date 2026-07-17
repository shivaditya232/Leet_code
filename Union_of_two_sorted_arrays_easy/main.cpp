#include<iostream>
using namespace std;
int main(){
    vector<int> list1={1,1,2,3,4,4,5};
    vector<int> list2={1,2,3,3,6,7,7};
    vector<int> final;
    int l=0;
    int r=0;
    int prev=-1;
    while(l<list1.size() && r<list2.size()){
        if(list1[l]==list2[r]){
            if(list1[l]!=prev){
            prev=list1[l];
            final.push_back(list1[l]);
            }
            l++;
            r++;
        }
        else if(list1[l]<list2[r]){
            if(list1[l]!=prev){
            prev=list1[l];
            final.push_back(list1[l]);
            }
            l++;
        }
        else if(list2[r]<list1[l]){
            if(list2[r]!=prev){
            prev=list2[r];
            final.push_back(list2[r]);
            }
            r++;
        }
    }
    while(l<list1.size()){
        if(list1[l]!=prev){
            prev=list1[l];
            final.push_back(list1[l]);
            }
        l++;
    }
    while(r<list2.size()){
        if(list2[r]!=prev){
            prev=list2[r];
            final.push_back(list2[r]);
            }
        r++;
    }
    return 0;
}