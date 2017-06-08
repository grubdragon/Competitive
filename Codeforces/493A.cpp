#include <map>
#include <set>
#include <utility>
#include <string>
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string hteam,ateam;
    cin>>hteam>>ateam;
    int T;
    cin>>T;
    map< pair<char,char>, set<int> > cards;
    for(int i=0;i<T;i++){
        int t;cin>>t;
        char team;cin>>team;
        int player;cin>>player;
        char c;cin>>c;
        auto X = make_pair(team,c);
        auto it = cards[X].find(player);
        if(it!=cards[X].end()){
            if(c=='y'){
                cards[X].erase(it);
                cout<<(team=='h'?hteam:ateam)<<" "<<player<<" "<<t<<"\n";
                X.second='r';
                cards[X].insert(player);
            }
        }
        else{
            if(c=='r'){
                cards[X].insert(player);
                cout<<(team=='h'?hteam:ateam)<<" "<<player<<" "<<t<<"\n";
            }
            else{
                auto Y=X;Y.second='r';
                if(cards[Y].find(player)==cards[Y].end())
                    cards[X].insert(player);
            }
        }        
    }
    return 0;
}