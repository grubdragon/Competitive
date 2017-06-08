#include<iostream>
#include<set>
using namespace std;
int main(){
    int N;
    long long sum=0;
    cin>>N;
    set<int> s;
    for(int i=0;i<N;i++){
        int X;cin>>X;
        while(s.find(X)!=s.end()){
            X--;
            if(X==0)break;
        }
        sum+=X;
        s.insert(X);
    }
    cout<<sum;
}
