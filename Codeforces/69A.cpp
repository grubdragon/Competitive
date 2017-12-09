#include<iostream>
using namespace std;
int main(){
    int sumX=0,sumY=0,sumZ=0;
    int T;cin>>T;
    for(int i=0;i<T;i++){
        int x,y,z;
        cin>>x>>y>>z;
        sumX+=x;sumY+=y;sumZ+=z;
    }
    if(sumX==0&&sumY==0&&sumZ==0)cout<<"YES";
    else cout<<"NO";
}