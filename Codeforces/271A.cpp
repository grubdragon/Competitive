#include<iostream>
using namespace std;
bool distinct(int n){
    int digits[4];
    int i=3;
    while(n>0){
        digits[i]=n%10;
        n/=10;
        i--;
    }
    if(digits[0]==digits[1]||digits[0]==digits[2]||digits[0]==digits[3]||digits[1]==digits[2]||digits[1]==digits[3]||digits[2]==digits[3])
    return false;
    return true;
}
int main(){
    int N;
    cin>>N;
    int i=N+1;
    for(;i<=9011;i++){
        if(distinct(i))break;
    }
    cout<<i;
}