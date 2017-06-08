#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin>>T;
    for(int i=0;i<T;i++){
        long long int N,K,M;
        cin>>N>>K>>M;
        if(N>=M)
            cout<<0<<"\n";
        else{
            double t=log(M/N)/log(K);
            cout<<(int)t<<"\n";
        }
    }
}