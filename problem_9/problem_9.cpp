#include "problem_9.h"
#include "bits/stdc++.h"

// problem URL: http://www.usaco.org/index.php?page=viewproblem2&cpid=1012
using namespace std;

bool sorted(vector<int> &list)
{
    for (int i = 0; i < list.size(); i++)
    {
        if(list[i] < list[i + 1])
        {
            return false;
        }
        return true;
    }
}

int return_largest_value_index(vector<int> &list, const int &end_index)
{
    int highest_value = 0;
    int highest_value_index = -1;

    for (int i = 0; i < end_index; i++)
    {
        if (highest_value < list[i])
        {
            highest_value_index = i;
            highest_value = list[i];
        }
    }

    return highest_value_index;
}

void problem_9()
{
    freopen("problem_9.in", "r", stdin);

    int n; cin >> n;

    vector <int> cow_list;

    for (int i = 0; i < n; i ++)
    {
        int cow_height; cin >> cow_height;
        cow_list.push_back(cow_height);
    }

    bool state = sorted(cow_list);
    int count = -1;
    int end_list = cow_list.size();

    while (state == false)
    {
        int highest_index = return_largest_value_index(cow_list, end_list);
        int previous_high_value = cow_list[cow_list.size() - 1];

        cow_list[cow_list.size() - 1]  = cow_list[highest_index];
        cow_list[highest_index] = cow_list[previous_high_value];
        state = sorted(cow_list);
        count ++;
        end_list = end_list - 1;
    }

    cout << count;
}