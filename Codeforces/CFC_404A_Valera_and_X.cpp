/**
 * @file CFC_404A_Valera_and_X.cpp
 * @author arrahhal (arrahhal@proton.me)
 * @idea check if every row is symmetric and diagonals squares are unique and positioned rightly,
 * i avoided nested for loop to enhance bigO
 * @url https://codeforces.com/contest/404/problem/A
 * @version 0.2
 * @date 2023-10-29
 *
 */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string row;
	char a, b;

	bool is_unique_x = true;

	for (int i = 0; i < n; i++)
	{
		cin >> row;

		if (i == 0)
		{
			a = row[0];
			b = row[1];
		}

		if (row[i] != row[n - 1 - i] || row[i] != a)
		{
			is_unique_x = false;
		}

		if (i == n / 2 && count(row.begin(), row.end(), b) != n - 1 || i != n / 2 && count(row.begin(), row.end(), b) != n - 2)
		{
			is_unique_x = false;
		}
	}

	if (is_unique_x)
		cout << "YES";
	else
		cout << "NO";
}
