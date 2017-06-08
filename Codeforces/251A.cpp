#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    int a[n];
    int leftpt=0,rightpt=0;
    long long int sum=0,k;
    for(int i=0;i<n;i++)cin>>a[i];
    for(rightpt=2;rightpt<n;rightpt++){
        while(a[rightpt]-a[leftpt]>d)leftpt++;
        k=rightpt-leftpt;
        sum+=k*(k-1)/2;
    }
    cout<<sum;
    return 0;
}