#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int max=0,people=0;
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        people+=b-a;
        if(people>max)max=people;
    }
    cout<<max;
}