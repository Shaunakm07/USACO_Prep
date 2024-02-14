#include "problem_10.h"
#include "bits/stdc++.h"

// problem URL: http://www.usaco.org/index.php?page=viewproblem2&cpid=965
using namespace std;

void problem_10()
{
    freopen("problem_10.in", "r", stdin);

    int n; cin >> n; n++;

    // List of maps
    // Each map contains a pair with the tile of the cow
    // Each title has a second element indiciating all the edges
    // The edges are represented in a list;

    vector <string> cow_list {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy","Sue"};
    map <string, vector<string>> cow_pairings;

    for (const auto &c : cow_list)
    {
        vector<string> blank_vector;
        cow_pairings[c] = blank_vector;
    }

    for (int i = 0; i < n; i++)
    {
        string cow_1;
        string cow_2;

        //ignore this variable it is used as a dummy variable
        string dummy;
        cin >> cow_2 >> dummy >> dummy >> dummy >> dummy >> cow_2;

        //create graph structure
        cow_pairings[cow_1].push_back(cow_2);
    }

    for (const auto &c: cow_pairings)
    {
        cout << "cow :" << c.first << "dependancy :";
        for (auto b: c.second)
        {
            cout << b << ",";
        }

        cout << "\n";
    }
}
