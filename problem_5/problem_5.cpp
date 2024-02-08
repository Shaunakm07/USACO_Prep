#include "problem_5.h"
#include "bits/stdc++.h"


// problem URL: https://cses.fi/problemset/task/1621

using namespace std;

void problem_5()
{
    freopen("problem_5.in", "r", stdin);

    int numbers;
    cin >> numbers;

    vector <int> list;
    for (int i = 0; i < numbers; i ++ )
    {
        int example;
        cin >> example;
        list.push_back(example);
    }

    std::sort(list.begin(), list.end());

    int distinct_values = 0;

    for (int i = 0; i < size(list); i++)
    {
        if(list[i  + 1] == list[i]){}
        else{distinct_values++;}
    }

    cout << (distinct_values);
}


