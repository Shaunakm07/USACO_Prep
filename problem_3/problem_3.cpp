#include "problem_3.h"
#include "bits/stdc++.h"


 // NOTE THIS PROBLEM IS INCOMPLETE

using namespace std;
int count(string word, int letter)
{
    int counter = 0;
    char character = char(letter);
    for (auto c: word) {
        if (c == character) {
            counter++;
        }
    }

    return counter;
}

void problem_3()
{
    int n;
    vector<int> letters(26);

    freopen("problem_3.in", "r", stdin);
    cin >> n;

    for (int i = 0; i < 26; i = i + 1)
    {
        vector<char> characters {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

        for (int j = 0; j < n; j++)
        {
            string word_1;
            string word_2;

            cin >> word_1 >> word_2;

            int word_1_count = count(word_1, characters[i]);
            int word_2_count = count(word_2, characters[i]);

            letters[i] = letters[i] + word_1_count + word_2_count + 1;
        }
    }

    for (int i: letters)
    {
        cout << i << "\n";
    }
}