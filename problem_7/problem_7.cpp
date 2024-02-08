#include "bits/stdc++.h"
#include "problem_7.h"
// problem URL: http://www.usaco.org/index.php?page=viewproblem2&cpid=832

using namespace std;

int index_in_list(int item, vector<int> ordered_cows)
{
    for (int i = 0; i < ordered_cows.size(); i++)
    {
        if(ordered_cows[i] == item)
        {
            return i;
        }
    }
    return -1;
}

void problem_7()
{

    freopen("problem_7.in", "r", stdin);

    int num_cows; cin >> num_cows;
    int num_social; cin >> num_social;
    int num_positions; cin >> num_positions;

    vector <int> ordered_cows;

    for (int i = 0; i < num_social; i++)
    {
        int cow; cin >> cow;
        ordered_cows.push_back(cow);
    }

    map <int, int> positions_to_cow;

    for (int i = 0; i < num_cows; i ++)
    {
        positions_to_cow[i + 1] = 0;
    }

    for (int i = 0; i < num_positions; i++)
    {
        int cow; cin >> cow;
        int position; cin >> position;

        positions_to_cow[position] = cow;
    }

    for(auto c: positions_to_cow)
    {
        int index = index_in_list(c.second, ordered_cows);
        if(index > 0)
        {
            int before = index - 1;
            positions_to_cow[c.first - 1] = ordered_cows[before];
        }
    }


    for(auto c: positions_to_cow)
    {
        if (c.second == 0)
        {
            cout << c.first;
            return ;
        }
    }
}