#include "problem_6.h"
#include "bits/stdc++.h"


// problem URL: http://www.usaco.org/index.php?page=viewproblem2&cpid=687

using namespace std;

void problem_6()
{
    freopen("problem_6.in", "r", stdin);

    vector<string> cowlist {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie","Henrietta"};
    map<string, int> cows;

    for (const auto &item: cowlist)
    {
        cows[item] = 0;
    }

    int log_count; cin >> log_count;

    for (int i = 0; i < log_count; i++)
    {
        string cow_name; cin >> cow_name;
        int milk_count; cin >> milk_count;

        cows[cow_name] = cows[cow_name] + milk_count;

    }

    set<int> s;
    for (const auto &i: cows)
    {
        s.insert(i.second);
    }

    vector <int> ordered_numbers;
    for (const int &item: s)
    {
        ordered_numbers.push_back(item);
    }

    int optimum_position = ordered_numbers[1];

    vector <string> cows_with_optimum_position;

    for (const auto &i: cows)
    {
        if (i.second == optimum_position)
        {
            cows_with_optimum_position.push_back(i.first);
        }
    }


    if(size(cows_with_optimum_position) > 1)
    {
        cout << "Tie" << "\n";
    } else
    {
        cout << cows_with_optimum_position[0];
    }

}