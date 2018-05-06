//题目：把		--"I Love GPLT"--	竖着输出，竖着输出指每个字符占一行（包括空格），即每行只能有1个字符和和回车
/*
思路：
将要输出的话存储到一个字符数字里，遍历所有字符并输出，每输出一个字符，附带输出一个回车
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i = 0;
	printf("请输入要竖着输出的字符串:\n");
	gets(str);
	while (str[i] != '\0')
	{
		printf("%c\n", str[i]);
		i++;
	}
	while (1);
	return 0;
}