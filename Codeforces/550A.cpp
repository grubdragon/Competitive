#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string k;
    cin>>k;
    int posAB=k.find("AB");
    int posBA=k.find("BA");
    if(posAB==string::npos||posBA==string::npos)
        cout<<"NO";
    else{
        int maxPosAB=posAB,maxPosBA=posBA,minPosAB=posAB,minPosBA=posBA;
        while(posAB!= string::npos)
        {
            if(posAB>maxPosAB)
                maxPosAB=posAB;
            if(posAB<minPosAB)
                minPosAB=posAB;
            posAB=k.find("AB",posAB+1);
        }
        while(posBA!= string::npos)
        {
            if(posBA>maxPosBA)
                maxPosBA=posBA;
            if(posBA<minPosBA)
                minPosBA=posBA;
            posBA=k.find("BA",posBA+1);
        }
        if(abs(maxPosAB-minPosBA)>1||abs(maxPosBA-minPosAB)>1)
            cout<<"YES";
        else
            cout<<"NO";
    }
}