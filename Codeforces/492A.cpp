#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int i=0;
    int c=0;
    while(c<=n){
        i++;
        c+=i*(i+1)/2;
    }
    cout<<i-1;
    return 0;
}