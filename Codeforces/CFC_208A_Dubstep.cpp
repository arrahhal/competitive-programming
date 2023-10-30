/**
 * @file CFC_208A_Dubstep.cpp
 * @author arrahhal
 * @brief scan for "WUB" If found, skip it and append a space without leading or double spacing. If not, add the letter to the filtered string.
 * @version 0.1
 * @date 2023-10-30
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  cin >> s;

  string o;

  for (int i = 0; i < s.length(); i++)
  {
    if (s.substr(i, 3) == "WUB")
    {
      i += 2;
      if (!o.empty() && o[o.length() - 1] != ' ')
      {
        o += ' ';
      }
      continue;
    }
    o += s[i];
  }
  cout << o;
}