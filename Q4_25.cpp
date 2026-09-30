#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;
    bool flag=true;
    for(int k=0;k<t;k++){
        cin>>s;
        for(int i=0;i<(int)s.length();i++){
        for(int j=0;j<(int)s.length();j++){
            if(s[i]==s[j]){
                flag=false;
            }
        }
    }
    cout<<(flag?"true":"false");
    }
    
}