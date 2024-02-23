#include<iostream>
using namespace std;
using LL = long long;

const int V = 5;

// print 
void printGraph(int graph[V][V]){
    cout<<"Graph is : "<<endl;
    for (int i = 0; i < V; i++)
    {
        /* code */
        for (int j = 0; j < V; j++)
        {
            cout<< graph[i][j] <<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
}

int main()
{
    // space complexut= O(V*V)
    int graph[V][V];
    for (int i = 0; i < V; i++)
    {
        for (int j = 0;  j< V; j++)
        {
            graph[i][j] = 0; 
            if(i == j){
                graph[i][j] = 1;
            }

        }
        
    }
    // establisgh edge 
    // TC = O(1)
    
    graph[0][1] = 1; //edge between these
    graph[1][0] = 1;
    graph[1][4] = 1;
    graph[4][1] = 1;
    graph[1][3] = 1;
    graph[3][1] = 1;
    graph[2][3] = 1;
    graph[3][2] = 1;

    printGraph(graph);

    // removing an edge 
    graph[1][3] = 0;
    graph[3][1] = 0;
    printGraph(graph);
return 0;
}