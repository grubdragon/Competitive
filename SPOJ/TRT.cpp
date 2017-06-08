#include <iostream>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
int N;
vector<int> v;
vector<vector<int>> mem;
int dp(int start, int end){
	int age = N+start-end;
	if(end==start)
	return age*v[start];
	if(mem[start][end]==-1)
	mem[start][end]=max(
		age*v[start]+dp(start+1,end),
		age*v[end]+dp(start,end-1)
		);
	return mem[start][end];
}
int main() {
	cin>>N;
	//Init sizes for original and cache
	v.resize(N,0);
	mem.resize(N,vector<int>(N,-1));
	//Input
	for(int i=0;i<N;i++){
		cin>>v[i];
	}
	cout<<dp(0,N-1);
	return 0;
}