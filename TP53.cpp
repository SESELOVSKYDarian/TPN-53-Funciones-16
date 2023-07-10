#include <bits/stdc++.h>
using namespace std;
void Imprimir(int num);
int main ()
{
	int na=500;
	Imprimir(n);
}
void Imprimir (int num)
{
	for (int i=1; i<=num; i++)
	{
		cout<<i<<" ";
		if (i%4==0)
		{
			cout<<" Multiplo de 4";
		}
		if (i%9==0)
		{
			cout<<" Multiplo de 9";
		}
		cout<<endl;
		if (i%5==0)
		{
			cout<<"----------";
		}
		cout<<endl;
	}
}