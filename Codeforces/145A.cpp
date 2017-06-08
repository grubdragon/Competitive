#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string m,n;
    cin>>m>>n;
    int a=0,b=0;
    for(int i=0;i<m.length();i++){
        if(m[i]!=n[i]){
            if(m[i]=='4')a++;
            else b++;
        }
    }
    int c=max(a,b);
    cout<<c;
}