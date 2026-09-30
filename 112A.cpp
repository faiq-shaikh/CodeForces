#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n=s1.length();
    char str1[n];
    char str2[n];
    for(int i=0;i<n;i++){
        str1[i]=s1[i];
        str2[i]=s2[i];
    }
    for(int i=0;i<n;i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }

    for(int i=0;i<n;i++){
        if(str1[i]==str2[i]){
            
            if(i==n-1){
                cout<<"0";
                break;
            }
            
        }
        else if(str1[i]<str2[i]){
            
                cout<<"-1";
                break;
        }
        else if(str1[i]>str2[i]){
            
                cout<<"1";
                break;
            
        }
    }
}