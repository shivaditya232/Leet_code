#include<iostream>
using namespace std;
void reverse(vector<int> &list){
    int l=0;
    int r=list.size()-1;
    while(l<r){
        swap(list[l],list[r]);
        l++;
        r--;
    }
    
}
int main(){
    vector<vector<int>> matrix={{5,1,9,11},{2,4,8,10},{13,1,6,7},{15,14,12,16}};
    int n=4;
    for(int i=0;i<n;i++){
        reverse(matrix[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            swap(matrix[i][j],matrix[n-j-1][n-i-1]);
        }
    }
    return 0;
}