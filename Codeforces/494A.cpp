#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string k;
    cin>>k;
    vector<int> disp;
    int currsum=0,lastHashPos=0;
    for(int i=0;i<k.length();i++){
        char X=k[i];
        if(X=='(')
        currsum++;
        else if(X==')')
        currsum--;
        else{
            disp.push_back(1);
            currsum--;
            lastHashPos=i;
        }
        if(currsum<0){
            cout<<-1;return 0;
        }
    }
    int currsum2=0;
    for(int i=k.length()-1;i>lastHashPos;i--){
        if(k[i]=='(')
        currsum2--;
        else
        currsum2++;
        if(currsum2<0){
            cout<<-1;return 0;
        }
    }
    disp[disp.size()-1]+=currsum;
    for(int i=0;i<disp.size();i++)cout<<disp[i]<<"\n";
}
