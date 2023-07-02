

#ifndef INC_4THSEM_KC_HEADER_H
#define INC_4THSEM_KC_HEADER_H

#endif //INC_4THSEM_KC_HEADER_H

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


void makesum(long long N, long long W, vector <vector <long long> > Sl,  vector <long long> Val1,  vector <long long> Val2)
{
    vector <int> answers(N, 0);
    int i = (int)(N - 1), j = (int)W;
    while (Sl[i][j] && i >= 1)
    {
        if (Sl[i][j] == Sl[i - 1][j])
        {
            i--;
        }
        else
        {
            if (Sl[i][j] == Val1[i] + Sl[i - 1][j - Val2[i]])
            {
                answers[i] = 1;
                j -= (int)Val2[i];
                i--;
            }
        }
    }
    long long V1sum = 0, V2sum = 0;
    for (i = 0; i < N; ++i)
    {
        if (answers[i])
        {
            V1sum += Val1[i];
            V2sum += Val2[i];
        }
    }
    cout << V1sum << endl;
}
