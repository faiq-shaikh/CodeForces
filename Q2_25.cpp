#include<iostream>
using namespace std;

bool three_sum(int n,int k,int *arr){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        for(int l=0;l<n;l++){
            if(arr[i]+arr[j]+arr[l]==k){
                return true;
            }
        }
    }
}
return false;
}
int main()
{
    
    int n,k;
    cin>>n>>k;
    if(n<3||n>2000){return -1;}
    int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
    cout<<(three_sum(n,k,arr)?"true":"false");
}