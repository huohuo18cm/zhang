#include<stdio.h.>
int main()
{
	int x = 0;
	float a = 0;

	printf("����������Ҫ����Ľ���Ԫ��\n");

	scanf_s("%f", &a);
	
	for (float i=a ; i >= 0; x++)
	{
		

		i *= 1.08;
		i -= 10;
		
	}
	printf("��Ҫ%d��ſ���ȡ�ꡣ\n", x);

	return 0;
}




 






