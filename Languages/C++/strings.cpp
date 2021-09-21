#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        cout<<(int)s[i]<<endl;
    }
    
    return 0;
}