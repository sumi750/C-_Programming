#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction){
        // diecrtion -> 0 = unordered, 1 = ordered

        // create an edge from u to v
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void printAdjlist(){
        for(auto i: adj){
            cout<<i.first <<" ->";
            for(auto j: i.second){
                cout<< j <<" , ";
                
            }
            cout<<endl;
        }
    }

};
int main()
{
    int n;
    cout<<"number of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"number of edges"<<endl;
    cin>>m;

    graph g;
    for(int i = 0; i<m; i++){
        int v, u;
        cin >>u >> v;
        // graph creating
        // g.addEdge(u,v,1);
        g.addEdge(u,v,0);
    }

    g.printAdjlist();
return 0;
}