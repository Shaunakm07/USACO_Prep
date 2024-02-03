//
// Created by Shaunak Mohapatra on 03/02/2024.
//
#include "problem_1.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void problem_1()
{
    freopen("problem_1.in", "r", stdin);

    string changes;
    cin >> changes;

    int no_of_swaps;
    no_of_swaps = stoi(changes);

    vector<int> pebble_position(3);

    for (int i = 0; i < no_of_swaps; i++)
    {
        pebble_position[i] = i;
    }

    vector<int> count(3);

    for (int i = 0; i < no_of_swaps; i++)
    {
        int a;
        int b;
        int c;

        cin >> a >> b >> c;

        a--;
        b-- ;
        c--;

        for (int j = 0; j < 3; j++)
        {
            int *instance = &pebble_position[j];
            if (a == *instance)
            {
                *instance = b;
            } else if (b == *instance) {
                *instance = a;
            }

            if(c == *instance)
            {
                count[j] ++;
            }
        }


    }

    cout << std::max({count[0], count[1], count[2]});
}