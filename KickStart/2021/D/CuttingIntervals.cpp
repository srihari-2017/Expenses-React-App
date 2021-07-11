#include<bits/stdc++.h>
using namespace std;

long long a[100001] = {0};

long long input(){
   for(int i=0;i<100001;i++){
        a[i] = 0;
    }
    long long n,c;
    cin>>n>>c;
    long long result = n;
    result = n;
    long long l,r;
    while(n--){
        cin>>l>>r;
        for(long long i=l+1;i<r;i++){
            a[i]++;
        }
    }
    sort(a,a+100001,greater<int>());
    
    int cuts = c;
    
    for(int i=0;i<100001 && cuts !=0;i++,cuts--){
        result += a[i];
       
    }
    return result;
}

// long long solve(){
//    return result;
// }

int main(){
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
        long long result = input();
        cout<<"Case #";
        cout<<(i+1);
        cout<<": ";
        cout<<result<<endl;
    }
    return 0;
}