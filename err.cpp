#include<stdio.h>
int k;
int tab[256];

void init_tableau (int tab[])
  {
  for (k=0; k<255; k=k+1)
    {
    tab[k]=0;
    }
  }
int main()
{
	init_tableau(tab);
}
