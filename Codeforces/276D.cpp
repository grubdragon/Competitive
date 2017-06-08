#include <iostream>
#include <cmath>
#include <bitset>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int l,r;
    cin>>l>>r;
    if(l==r){
        cout<<0;return 0;
    }
    string lstr = bitset<64>(l).to_string();
    string rstr = bitset<64>(r).to_string();
    int i=0;
    while(lstr[i]==rstr[i])i++;
    long long k= pow(2,64-i) - 1;
    cout<<k;
}