#include <iostream>
#include <map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m,n;
	cin>>n>>m;
	map<int,map<int,int>> markers,caps;
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		cin>>x>>y;
		markers[y][x]++;
	}
	for (int i = 0; i < m; ++i)
	{
		int a,b;
		cin>>a>>b;
		caps[b][a]++;
	}
	int closed=0, b_closed=0;
	for(auto dia: markers){
		int total_markers=0,total_caps=0;
		for(auto color: dia.second){
			b_closed+=min(caps[dia.first][color.first],color.second);
			total_markers+=color.second;
		}
		for(auto color: caps[dia.first]){
			total_caps+=color.second;
		}
		closed+=min(total_caps,total_markers);
	}
	cout<<closed<<" "<<b_closed;
	return 0;
}