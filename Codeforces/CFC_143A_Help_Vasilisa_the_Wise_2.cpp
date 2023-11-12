/**
 * @file CFC_143A_Help_Vasilisa_the_Wise_2.cpp
 * @author arrahhal
 * @idea for each top right gem that is less than r1, c1 and d1 check if there is a possible solution based on its value.
 * @url https://codeforces.com/contest/143/problem/A
 * @date 2023-11-11
 *
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int r1, r2, c1, c2, d1, d2;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

  for (int i = 1; i < min(r1, min(c1, d1)); i++)
  {
    int a = i;
    int b = r1 - a;
    int c = c1 - a;
    int d = d1 - a;
    if (b + d == c2 && b + c == d2 && c + d == r2 && a != b && a != c && a != d && b != c && b != d && c != d && a <= 9 && b <= 9 && c <= 9 && d <= 9)
    {
      cout << a << " " << b << "\n"
           << c << " " << d;
      return 0;
    }
  }

  cout << -1;
}
