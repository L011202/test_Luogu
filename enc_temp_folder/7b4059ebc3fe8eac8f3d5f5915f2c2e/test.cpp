#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define  PI  3.14
/*@洛谷顺序—B2029—大象喝水
 *author_liang_shipion
 *int main()
{
	double a,b,c;
	int d;
	scanf("%lf%lf", &a, &b);
	c = PI * b * b * a;
	d = 20000 / (c);
	printf("%d\n", d+1);
	return 0;
}
 * 
*/
/*@C语言编程学习_P22
int main()
{
	int a[2][3] = { 1,2,3, 4,5,6 };
	printf("%d\n", a[1][0]);
	return 0;
}
*/
/*@C语言编程学习_P22
int main()
{
	int arr[] = {1,2,(3,4),5};//()的结果输出最后一个，所以此处字符串的元素为1,2,4,5
	printf("%d\n", sizeof(arr));//求的是字符串的长度，一个字符串占四个字节
	return 0;
}
*/
/*@C语言编程学习_P22
* //void Initarr(int arr[], int sz)//函数初始化,并把内部元素全部初始化为0
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
				***
//void Pr(int arr[],int sz)//输出函数
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	printf("\n");
//}
				***
	//void Reverse(int arr[], int sz)//翻转函数
		//{
		//	int left = 0;
		//	int right = sz-1;
		//	int temp;
		//	while (left < right)
		//	{
		//		temp = arr[left];
		//		arr[left] = arr[right];
		//		arr[right] = temp;
		//		left++;
		//		right--;
		//	}
		//}
						***
		//int main()
		//{
		//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
		//	int sz = sizeof(arr) / sizeof(arr[0]);
		//	//Initarr(arr,sz);
		//	printf("未翻转前的数组\n\n\n");
		//	Pr(arr, sz);
		//	Reverse(arr, sz);
		//	printf("翻转后的数组\n\n\n");
		//	Pr(arr, sz);
		//	return 0;
		//} 
*/
/*@洛谷编程_顺序题单_P1425
int main()
{
	int a, b, c, d, e, f;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if ((d - b) < 0)
	{
		e = c - a - 1;
		f = 60 - b + d;
	}
	else
	{
		e = c - a;
		f = d- b;
	}
	printf("%d %d", e, f);
	return 0;
}
*/

/*@C语言编程学习_P24
*@输入一个数，判断他的二进制表示中含有几个1
* 
*
*
//int count_one(int i);//函数声明，如果函数在主函数上面可以不用声明
int main()//主函数
{
	int a;
	scanf("%d", &a);//输入一个数，存到a中
	int count = count_one(a);
	printf("%d的二进制中含有的1的个数: %d",a,count);
	return 0;
}
//方法1用模的方法
//int count_one(int i)//定义一个有参函数,并return一个int型的数字
//{
//	int count=0;
//	while (i)
//	{
//		if (i % 2 == 1)//判断他的二进制中含有几个1
//		{
//			count++;
//		}
//		i = i / 2;
//	}
//	return count;//把count进行retuen
//}
//方法2用右移按位与的方法 
//int count_one(int i)
//{
//	int count=0;
//	int j=0;
//	for(j=0;j<32;J++)
//	{
//		if((（n>>j)&1）==1)
//		{
//		count++;
//		}
//	}
//	return count;
//}
//方法三
//用相与的方法
//int count_one(int i)
//{
//	int count=0;
//	while(i)
//	{
//	i=i&(i-1);
//	count++;
//	} 
//	return count;
//}
*/
/*@输入一个整数二进制序列中所有的偶数和奇数位，分别打印出其二进制序列
* 
*/
//void print(int m)//打印奇偶数函数
//{
//	int i = 0;
//	printf("奇数位\n");
//	for (i = 31; i >= 0; i-=2)
//	{
//		printf("%d  ", (m >> i) & 1);//右移后与1相与
//	}
//	printf("\n偶数位\n");
//	for (i = 30; i >= 1; i-=2)
//	{
//		printf("%d  ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	print(a);
//	return 0;
//}
//@洛谷P5708_还有错误，还未完全改正
#include "math.h"
int main()
{
	int a, b, c;
	double d, e;
	scanf("%d%d%d", &a, &b, &c);
	d = (double)((1 / 2) / (a + b + c));
	e = sqrt(d * (d - a) * (d - b) * (d - c));
	printf("%.1f", e);
	return 0;
}

