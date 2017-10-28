#include <bits/stdc++.h>
using namespace std;
int main()
{
  //ios_base::sync_with_stdio(false);cin.tie(NULL);
  int i, iter, diff = 1, a = 0, n = 10;
  for(iter = 0; iter<100000000; iter++)
	{
	  printf("%d\n", a);
	  a = a+diff;
	  if (a == n-1)
		diff = -1;
	  if (a == 0)
		diff = 1;
	}
  return 0;
}

