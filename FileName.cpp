#include<stdio.h.>
int main()
{
	int x = 0;
	float a = 0;

	printf("请输入你需要存入的金额（万元）\n");

	scanf_s("%f", &a);
	
	for (float i=a ; i >= 0; x++)
	{
		

		i *= 1.08;
		i -= 10;
		
	}
	printf("需要%d年才可以取完。\n", x);

	return 0;
}




 






