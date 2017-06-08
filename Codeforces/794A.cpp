#include<iostream>
using namespace std;
int main(){
    int counter=0;
    int a,b,c;
    cin>>a>>b>>c;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        if(x>b&&x<c)counter++;
    }
    cout<<counter;
}