#include <iostream>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int N,K;
	cin>>N>>K;
	int a[N];
	for(int i=0;i<N;i++)
	cin>>a[i];
	int x=(N-K);
	int max=a[N-1];
	for(int i=0;i<x;i++){
	    int sum=a[i]+a[2*x-1-i];
	    if(sum>max)
	    max=sum;
	}
}