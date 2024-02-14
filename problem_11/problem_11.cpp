#include "problem_11.h"
#include "bits/stdc++.h"

// problem URL: https://usaco.org/index.php?page=viewproblem2&cpid=595
using namespace std;

void problem_11()
{
    freopen("problem_11.in", "r", stdin);
    int n; cin >> n;
    vector <int> id_list;

    vector<int> sum_list;

    for (int i = 0; i < n; i++)
    {
        int cow_id; cin >> cow_id;
        id_list.push_back(cow_id);
    }

    sum_list.push_back(id_list[0]);

    for (int i = 1; i < id_list.size(); i++)
    {
        sum_list.push_back(sum_list[i - 1] + id_list[i]);
    }

    int largest_range = 0;

    for (int start_index = 0;start_index < sum_list.size(); start_index ++)
    {
        for (int end_index = start_index; end_index < sum_list.size(); end_index ++)
        {
            int id_total = sum_list[end_index] - sum_list[start_index];
            if (id_total % 7 == 0){
                int range = end_index - start_index;
                if (range > largest_range)
                {
                    largest_range = range;
                }
            }

        }
    }


    cout << largest_range;
}