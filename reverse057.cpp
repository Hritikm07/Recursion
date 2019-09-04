#include<stdio.h>
char a[]= {'S', 'I', 'T', 'E', 'T', 'C'};
	void f(int i)
	{
	printf ("%c", a[i]);
	i--;
	if(i!=-1)
	f(i);
	}

int main()
{
	f(5);
}

