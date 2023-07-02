//
// Created by zuha on 30.06.2023.
//

#ifndef INC_4THSEM_GRAPH_COLOR_H
#define INC_4THSEM_GRAPH_COLOR_H

#endif //INC_4THSEM_GRAPH_COLOR_H

#include <stdlib.h>
#include <iterator>
#include <time.h>
#include <map>
#include <iostream>
#include <fstream>
#include <random>
#include <cstdlib>
#include <list>
#include <ctime>
#include <functional>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cstring>
#include <cctype>

using namespace std;

void coloring(vector<pair <int, int> > edges, vector<int> color, int v, int e)
{
    for (int i = 1; i < v; ++i)
    {
        set <int> colors;
        for (int j = 0; j < e; ++j)
        {
            if (edges[j].first == i)
            {
                colors.insert(color[edges[j].second]);
            }
            else
            {
                if (edges[j].second == i)
                {
                    colors.insert(color[edges[j].first]);
                }
            }
        }
        set <int>::iterator search;
        for (int j = 1; j < v + 1; ++j)
        {
            search = colors.find(j);
            if (search == colors.end())
            {
                color[i] = j;
                break;
            }
        }
    }
    sort(color.begin(), color.end());
    cout << *(color.end() - 1)<<endl;
}