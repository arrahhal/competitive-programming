/**
 * @file CFC_742A_Arpas_hard_exam_and_Mehrdads_naive_cheat.cpp
 * @author arrahhal
 * @brief last digit of 1378 (which is 8) is what we care about here, i just figured a pattern in the multiples of 8 and implemented it.
 * @url https://codeforces.com/contest/742/problem/A
 * @date 2023-10-30
 *
 */
#include <iostream>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  if (n == 0)
  {
    cout << 1;
    return 0;
  }

  switch (n % 4)
  {
  case 0:
  {
    cout << 6;
    break;
  }
  case 1:
  {
    cout << 8;
    break;
  }
  case 2:
  {
    cout << 4;
    break;
  }
  case 3:
  {
    cout << 2;
    break;
  }
  }
}