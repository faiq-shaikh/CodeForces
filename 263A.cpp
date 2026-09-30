#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int row,col,opr=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                row=i;
                col=j;
            }
        }
    }
    while(row!=2 || col!=2){
        if(row<2){
            row++;
            opr++;
        }
         else if(row>2){
            row--;
            opr++;
        }
        else if(col<2){
            col++;
            opr++;
        }
        else if(col>2){
            col--;
            opr++;
        }
        else if(row==2 && col==2){
            break;
        }
    }
    cout<<opr;

}