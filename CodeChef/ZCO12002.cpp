#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int a[], int k){
int low=0,high=a.size()-1;
while(low<=high){
int mid=(low+high)/2;
if(a[mid]==k){
return mid;
}
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N,X,Y,c1,c2;
cin>>N>>X>>Y;
int V[X], W[Y];
pair<int, int> C[N];
for(int i=0;i<N;i++){
cin>>c1>>c2;
C[i] = make_pair(c1,c2);
}
for(int i=0;i<X;i++){
cin>>V[i];
}
for(int i=0;i<Y;i++){
cin>>W[i];
}
sort(V,V+X);
sort(W,W+Y);
sort(C,C+N);

return 0;
}