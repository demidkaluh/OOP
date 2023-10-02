#include <utility>
#include <iostream>
#include <vector>
#include <array>

#pragma once

template <typename T, size_t N> //перегрузка вывода для std::array
std::ostream& operator<<(std::ostream& out, const std::array <T, N>& a)
{
    out << "[";
    for (size_t i = 0; i < N; i++)
    {
        out << a[i];
        if (i < N - 1)
            out << ", ";
    }
    out << "]";
    return out;
}

template <typename T1, typename T2> //перегрузка вывода для std::pair
std::ostream& operator<<(std::ostream& out, const std::pair <T1, T2>& p)
{
    out << "(" << p.first << ", " << p.second << ")";
    return out;
}

template <typename T> //перегрузка вывода для std::vector
std::ostream& operator<<(std::ostream& out, const std::vector<T>& v)
{
    out << "{";
    for (size_t i = 0; i < v.size(); i++)
    {
        out << v[i];
        if (i < v.size() - 1)
            out << ", ";
    }
    out << "}";
    return out;
}