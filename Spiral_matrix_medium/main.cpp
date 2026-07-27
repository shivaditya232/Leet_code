#include<iostream>
using namespace std;
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    int m=3;
    int start=0;
    int end=m-1;
    int top=0;
    int bottom=n-1;
    vector<int> result;
    while(true){
    if(start>end){break;}
    for(int i=start;i<=end;i++){
        result.push_back(matrix[top][i]);
    }
    top+=1;
    if(top>bottom){
        break;
    }
    for(int j=top;j<=bottom;j++){
        result.push_back(matrix[j][end]);
    }
    end--;
    if(end>bottom){
        break;
    }
    for(int k=end;k>=bottom;k--){
        result.push_back(matrix[bottom][k]);
    }
    bottom--;
    if(top>bottom){
        break;
    }
    for(int z=bottom;z>=top;z--){
        result.push_back(matrix[z][start]);
    }
    start++;
}
    return 0;
}

