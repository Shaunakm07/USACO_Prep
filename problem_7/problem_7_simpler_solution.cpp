#include "bits/stdc++.h"
#include "problem_7_simpler_solution.h"
// problem URL: http://www.usaco.org/index.php?page=viewproblem2&cpid=832

using namespace std;

void problem_7_simpler_solution()
{

    freopen("problem_7.in" , "r" , stdin);
    int num_cows; cin >> num_cows;
    int num_social; cin >> num_social;
    int num_positions; cin >> num_positions;

    for (int i = 0; i < num_social; i++)
    {
        int cow; cin >> cow;
    }

    vector <int> positions;
    for (int i = 0; i < num_positions; i++)
    {
        int cow; cin >> cow;
        int position; cin >> position;

        positions.push_back(position);
    }

    std::sort(positions.begin(), positions.end());
    cout<< positions[size(positions) - 1] + 1;
}