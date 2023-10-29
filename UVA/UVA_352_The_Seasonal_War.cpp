/**
 * @file UVA_352_The_Seasonal_War.cpp
 * @author arrahhal (arrahhal@proton.me)
 * @url https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=288
 * @version 0.1
 * @date 2023-10-29
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <string>
#include <set>

using namespace std;

int n;
int m[25][25];
set<string> record;

void add_neighbors_to_record(int v, int h)
{
  // neighbors array;
  for (int i = -1; i <= 1; i++)
  {
    for (int j = -1; j <= 1; j++)
    {
      if (i + v < 0 || j + h < 0 || i + v >= n || j + h >= n)
        continue;
      const string rs = to_string(v + i) + "-" + to_string(h + j); // [r]ecord [s]tring
      const bool is_in = record.find(rs) != record.end();
      // for each items within array add_neighbors_to_record !! if not already exists and if not overflow (out of the matrix)
      if (!is_in && m[i + v][j + h] == 1)
      {
        record.insert(rs);
        add_neighbors_to_record(v + i, h + j);
      }
    }
  }
}

int main()
{
  int img_n = 1;
  while (cin >> n)
  {

    for (int i = 0; i < n; i++)
    {
      string row;
      cin >> row;
      for (int j = 0; j < n; j++)
      {
        m[i][j] = row[j] - '0';
      }
    }

    record.erase(record.begin(), record.end());
    // [e]agles [c]ount
    int ec = 0;

    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
      {
        const bool is_in = record.find(to_string(i) + "-" + to_string(j)) != record.end();

        if (m[i][j] == 1 && !is_in)
        {
          ec++;
          add_neighbors_to_record(i, j);
        }
      }

    cout << "Image number " << img_n << " contains " << ec << " war eagles." << endl;
    img_n++;
  }
}