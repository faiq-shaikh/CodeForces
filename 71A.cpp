#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int count=0;
        string s;
        cin>>s;
        cin.ignore();
        if(s.length()<=10){
            cout<<s<<endl;
        }
        else{
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
    }
}