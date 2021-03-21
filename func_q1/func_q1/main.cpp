#include<iostream>

long long sum(int *a, int n) {
	if (n < 0 && n > 3000000)
	{
		printf("(0 <= n <= 3000000");
		return (long long)-1;
	}
	long long ans = 0;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] >= 0 && a[i] <= 1000000)
			ans += a[i];
		else
			--i;
	}
	return ans;
}
void main()
{
	int num;
	scanf_s("%d", &num);
	int* a;
	a = (int *)malloc(sizeof(int) * num);
	
	long long result;
	result = sum(a, num);
	if (num == -1)
		printf("n°ª¿À¹ö");
	else
		printf("%lld", result);
	free(a);
	return;
}