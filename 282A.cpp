#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="++X" || s=="X++"){
            a++;
        }
        else if(s=="--X" || s=="X--"){
            a--;
        }
    }
    cout<<a;
}