#include "problem_2.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void problem_2()
{
    freopen("problem_2.in", "r", stdin);

    int n, m;

    cin >> n >> m;

    vector<int> speedlimit;
    vector<int> bessieSpeed;

    for(; n > 0; n--)
    {
        int distance;
        int speed_limit;

        cin >> distance >> speed_limit;

        while (distance > 0)
        {
            speedlimit.push_back(speed_limit);
            distance --;
        }
    }

    for(; m > 0; m--)
    {
        int distance;
        int speed;

        cin >> distance >> speed;

        while (distance > 0)
        {
            bessieSpeed.push_back(speed);
            distance --;
        }
    }

    int max_speed = 0;

    for (int j = 0; j < 100; j++)
    {
        if (bessieSpeed[j] - speedlimit[j] > max_speed )
        {
            max_speed = bessieSpeed[j] - speedlimit[j];
        }
    }
    cout << max_speed;
}