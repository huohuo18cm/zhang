#include<stdio.h>


int main()
{
	int year = 0;
	int month = 0;
	int date = 0;
	int day = 0;

		printf("请输入 年 月 日。\n");
		scanf_s(" %d %d %d", &year, &month, &day);
	
	if (month <= 12&&day<=31)
	{
		switch (month)
		{
			case 12:date += 31;
			case 11:date += 30;
			case 10:date += 31;
			case 9:date += 30;
			case 8:date += 31;
			case 7:date += 31;
			case 6:date += 30;
			case 5:date += 31;
			case 4:date += 31;

			case 3:date += 31;

			case 2:
				if (year % 4 == 0)
			{
				date += 29;
			}
				else
			{
				date += 28;
			}
			case 1:date += 31;
			printf("%d年%d月%d日是%d年的第%d天。\n", year, month, day, year, date);
		}
	}
		
else
{
	printf("请输入正确的 年 月 日。");
	}
return 0;
}








