#include<bits/stdc++.h>
using namespace std;

int G[3][3];

void input(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==1 && j==1){
                continue;
            }
            else{
                cin>>G[i][j];
            }
        }
    }
    return;
}

int diagonals(){
    int count = 0;
    if(G[1][1]-G[0][0] == G[2][2]-G[1][1])
        count++;
    if(G[1][1]-G[2][0] == G[0][2]-G[1][1])
        count++;
    return count;
}
int columns(){
    int count = 0;
    for(int i=0;i<3;i++){
        if(G[i][1]-G[i][0] == G[i][2]-G[i][1])
            count++;
    }
    return count;
}

int rows(){
    int count = 0;
    for(int i=0;i<3;i++){
        if(G[1][i]-G[0][i] == G[2][i]-G[1][i])
            count++;
    }
    return count;
}

int GetCount(int val){
    G[1][1] = val;
    int count = columns();
    count += rows();
    count += diagonals();
    return count;
}

void solve(){
    int max_count = 0;
    for(int i=-50;i<=50;i++){
        int count = GetCount(i);
        if(max_count < count){
            max_count = count;
        }
    }
    cout<<max_count;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        input();
        cout<<"Case #";
        cout<<(i+1);
        cout<<": ";
        solve();
        cout<<endl;
    }
    return 0;
}