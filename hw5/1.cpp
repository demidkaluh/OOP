#include <iostream>
#include <list>
#include "container_cout.h"

using std::cout, std::endl, std::list;

int solve(const int& n, const int& m)
{
	list<int> l;

	for (int i = 1; i < n + 1; i++)
		l.push_back(i);

	list<int>::iterator it = l.begin();

	std::advance(it, m - 1);

	for (int i = 0; i < n - 1; i++)
	{
		cout << l << endl;
		it = l.erase(it);

		for (int i = 0; i < m - 1; i++)
		{
			if (it == l.end())
				it = l.begin();
			else
				it++;
		}
	}

	return *it;
}

int main()
{
	int n = 21;
	int m = 2;

	cout << solve(n, m);

	return 0;
}