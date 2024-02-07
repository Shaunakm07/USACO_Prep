#include "problem_4.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// problem URL: http://www.usaco.org/index.php?page=viewproblem2&cpid=963

using namespace std;

bool is_in_array (pair<int, int> *input, int iterations, vector<vector<pair <int, int>>> *pairings)
{
    for (int i = 0; i < iterations; i++)
    {
        for (vector<pair <int, int>> examples : *pairings)
        {
            bool is_there = false;

            for (pair<int, int> item: examples)
            {
                if(*input == item)
                {
                    is_there = true;
                }
            }
            if(is_there != true)
            {
                return false;
            }

        }
    }

    pair<int, int> int_input = *input;
    cout << int_input.first << "," << int_input.second << "\n";
    return true;
}

void problem_4()
{
    freopen("problem_4.in", "r", stdin);
    int rounds;
    int participants;

    cin >> rounds >> participants;

    vector<vector<int>> cows;

    for (int i = 0; i < rounds; i++)
    {
        vector<int> tmp_cows;

        for (int j = 0; j < participants; j ++){
            int t;
            cin >> t;

            tmp_cows.push_back(t);
        }

        cows.push_back(tmp_cows);
    }

    vector<vector<pair <int, int>>> pairings;

    for (vector<int> iterator: cows)
    {
        vector<pair<int, int>> list_pairs;

        for (int i = 0; i < iterator.size(); i++)
        {
            for (int j = i + 1; j < iterator.size(); j++)
            {
                pair <int, int> pairs = make_pair(iterator[i], iterator[j]);
                list_pairs.push_back(pairs);
            }
        }

        pairings.push_back(list_pairs);
    }


    vector<pair<int, int>> example_1 = pairings[1];

    int pair_counts = 0;

    for (int i = 0; i < size(example_1); i ++)
    {
        if(is_in_array(&example_1[i], rounds, &pairings)){pair_counts ++;}
    }

    cout << pair_counts;
}

