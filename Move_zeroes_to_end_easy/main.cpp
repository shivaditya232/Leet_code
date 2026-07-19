#include<iostream>
using namespace std;
int main(){
    vector<int> list={1,0,0,2,0,4,0,0,3,5};
    int l=0,r=0;
    while(r<list.size()){
        if(list[r]!=0){
            swap(list[r],list[l]);
            l++;
            
        }
        r++;
    }
    return 0;
}
