
#include "Graph_color.h"

int main()
{
    int V, E;
    cin >> V >> E;
    vector <pair <int, int> > edges(E);
    for (int i = 0; i < E; ++i)
    {
        cin >> edges[i].first >> edges[i].second;
    }
    vector<int> color(V, 0);
    color[0] = 1;
    coloring(edges, color, V, E);
}



