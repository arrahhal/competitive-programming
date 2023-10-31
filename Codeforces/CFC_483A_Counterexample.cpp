/**
 * @file CFC_483A_Counterexample.cpp
 * @author arrahhal
 * idea gcd algorithm: https://en.wikipedia.org/wiki/Euclidean_algorithm,
 * (any number) is coprime with (number + 1).
 * @url https://codeforces.com/contest/483/problem/A
 * @date 2023-10-31
 *
 */
#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
  while (b != 0)
  {
    long long temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

bool is_coprime(long long a, long long b)
{
  return gcd(a, b) == 1;
}

int main()
{
  long long l, r;
  cin >> l >> r;
  long long a, b, c;
  for (long long i = l; i <= r - 2; i++)
  {
    a = i;
    b = i + 1;
    for (long long j = i + 2; j <= r; j++)
    {
      c = j;
      if (is_coprime(b, c) && !is_coprime(a, c))
      {
        cout << a << " " << b << " " << c;
        return 0;
      }
    }
  }
  cout << -1;
}
