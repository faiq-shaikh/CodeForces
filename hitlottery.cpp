#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count=0;

    count+=n/100;
    n=n%100;

    count+=n/20;
    n=n%20;

    count+=n/10;
    n=n%10;

    count+=n/5;
    n=n%5;

    count+=n;

    cout<<count;

    return 0;
}