#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool sortcol(const vector<long long int>& v1, const vector<long long int>& v2 ) {
    return v1[1] < v2[1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,r,avg;
    cin>>n>>r>>avg;
    long long int sum=0;
    vector< vector<long long int>> vect(n,vector<long long int>(2));
    for (int i=0; i<n; i++){
        cin>>vect[i][0]>>vect[i][1];
        sum+=vect[i][0];
    }
    double curravg=sum/n;
    if(curravg>=avg){
        cout<<0;
        return 0;
    }
    sort(vect.begin(), vect.end(),sortcol);
    long long int leftover=avg*n-sum;
    long long int total=0;
    for (int i=0; i<n; i++){
        if(leftover<=r-vect[i][0]){
            total+=leftover*vect[i][1];break;
        }
        else{
            leftover-=r-vect[i][0];
            total+=(r-vect[i][0])*vect[i][1];
        }
    }
    cout<<total;
    return 0;
}