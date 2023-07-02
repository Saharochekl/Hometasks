#include "BackPack_task_header.h"


int main()
{

    long long N, W;
    cin >> N >> W;
    vector <long long> Val1(N);
    vector <long long> Val2(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> Val1[i] >> Val2[i];
    }


    vector <vector <long long> > Sl(N, vector <long long> (W + 1, 0));
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= W; ++j)
        {
            if (Val2[i] <= j)
            {
                if (i > 0)
                {
                    Sl[i][j] = max(Sl[i - 1][j], Sl[i - 1][j - Val2[i]] + Val1[i]);
                }
                else
                {
                    Sl[i][j] = Val1[i];
                }
            }
            else
            {
                if (i > 0)
                {
                    Sl[i][j] = Sl[i - 1][j];
                }
            }
        }
    }
    makesum(N, W, Sl, Val1, Val2);

    return 0;
}