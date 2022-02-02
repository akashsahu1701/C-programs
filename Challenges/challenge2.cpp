// secion 7
#include "bits/stdc++.h"
#include "vector"
using namespace std;

int main()
{
    vector<int> vec1, vec2;
    vec1.push_back(10);
    vec1.push_back(20);
    vec2.push_back(100);
    vec2.push_back(200);
    cout << vec1.size() << " " << vec2.size() << endl;

    vector<vector<int>> vec_2D;
    vec_2D.push_back(vec1);
    vec_2D.push_back(vec2);

    for (auto x : vec_2D)
    {
        for (auto y : x)
        {
            cout << y << "  ";
        }
        cout << "\n";
    }

    vec1.at(0) = 1000;
    for (auto y : vec1)
    {
        cout << y << "  ";
    }
    cout << "\n";

    for (auto y : vec2)
    {
        cout << y << "  ";
    }

    return 0;
}