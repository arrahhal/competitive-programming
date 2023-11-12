/**
 * @file CFC_296A_Yaroslav_and_Permutations.cpp
 * @author arrahhal
 * @idea use an array to count every element occurrences instead of nested loops.
 * @date 2023-11-12
 *
 */
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  int counts[1001] = {0};
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
  {
    counts[a[i]] += 1;
  }

  int max_count = *max_element(counts, counts + 1001);

  if ((n % 2 == 0 && max_count <= n / 2) || (n % 2 != 0 && max_count <= (n / 2) + 1))
    cout << "YES";
  else
    cout << "NO";
}