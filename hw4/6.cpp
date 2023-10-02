#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <utility>
#include <cmath>
#include "container_cout.h"

using std::cout, std::endl;


template<typename T>
std::vector< std::pair<T, T> > pairing(std::vector<T> v)
{
    std::vector< std::pair<T, T> > res;
    size_t sz = v.size();

    for (size_t i = 0; i < ceil(sz / 2.); i++)
        res.push_back({0, 0});

    for (size_t i = 0; i < sz; i++)
    {
        if (i % 2 == 0)
            res[i / 2].first = v[i];
        else
            res[i / 2].second = v[i];
    }

    return res;
}


int main()
{
    std::vector <int> v {10, 20, 30, 40, 50, 60};
    cout << pairing(v) << endl;
    std::vector <std::string> v2 = {"m", "n", "1"};
    cout << pairing(v2);


    //std::array<std::string, 7> a {"cat", "dog", "mouse", "elephant", "tiget", "axolotl", "wolf"};
    //cout << pairing(a) << endl;


    //std::string s {"Cats and dogs!"};
    //cout << pairing(s) << endl;
}


/*
    Программа должна напечатать:

    [(10, 20), (30, 40), (50, 60)]
    [(cat, dog), (mouse, elephant), (tiget, axolotl), (wolf, )]
    [(C, a), (t, s), ( , a), (n, d), ( , d), (o, g), (s, !)]
*/