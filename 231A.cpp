#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,total=0;
int count;
cin>>n;
int arr[n][3];
for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){
    count=0;
    for(int j=0;j<3;j++){
        if(arr[i][j]==1){
            count++;  //this tells the frequency of 1
        }
        
    }
    if(count>=2){
            total++;
        }
    //total

}
cout<<total;
}