#include "problem_8.h"
#include "bits/stdc++.h"

// problem URL: http://www.usaco.org/index.php?page=viewproblem2&cpid=1012
using namespace std;

void problem_8()
{
    freopen("problem_8.in", "r", stdin);
    int cow_count; cin >> cow_count;

    string order; cin >> order;
    string recieved; cin >> recieved;

    vector <int> string_differences;
    for (int i = 0; i < cow_count; i ++)
    {
        int order_int = int(order[i]);
        int recieved_int = int(recieved[i]);

        if (!(order_int - recieved_int == 0))
        {
            string_differences.push_back(i);
        }
    }

    bool last_pair_consecutive = false;
    int consecutive_count = 1;

    for (int i = 0; i < string_differences.size(); i++)
    {
        if (string_differences[i] + 1 == string_differences[i + 1])
        {
            if (last_pair_consecutive == false)
            {
                consecutive_count ++;
                last_pair_consecutive = true;
            } else{
                last_pair_consecutive = false;
            }
        }
    }

    cout << consecutive_count;
}