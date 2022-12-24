#include <stdio.h>

int main()
{
	int tc;
	scanf("%d", &tc);
	int num[tc];
	for (int i = 0; i < tc; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < tc; i++)
	{
		int count = 0;
		for (int j = 1; j <= tc; j++)
		{
			int div = num[i] / j;
			if (sizeof(div) < sizeof(num[i]))
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
}