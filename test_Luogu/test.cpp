#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define  PI  3.14
/*@���˳��B2029�������ˮ
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
/*@C���Ա��ѧϰ_P22
int main()
{
	int a[2][3] = { 1,2,3, 4,5,6 };
	printf("%d\n", a[1][0]);
	return 0;
}
*/
/*@C���Ա��ѧϰ_P22
int main()
{
	int arr[] = {1,2,(3,4),5};//()�Ľ��������һ�������Դ˴��ַ�����Ԫ��Ϊ1,2,4,5
	printf("%d\n", sizeof(arr));//������ַ����ĳ��ȣ�һ���ַ���ռ�ĸ��ֽ�
	return 0;
}
*/
/*@C���Ա��ѧϰ_P22
* //void Initarr(int arr[], int sz)//������ʼ��,�����ڲ�Ԫ��ȫ����ʼ��Ϊ0
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
				***
//void Pr(int arr[],int sz)//�������
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	printf("\n");
//}
				***
	//void Reverse(int arr[], int sz)//��ת����
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
		//	printf("δ��תǰ������\n\n\n");
		//	Pr(arr, sz);
		//	Reverse(arr, sz);
		//	printf("��ת�������\n\n\n");
		//	Pr(arr, sz);
		//	return 0;
		//} 
*/
/*@��ȱ��_˳���ⵥ_P1425
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

/*@C���Ա��ѧϰ_P24
*@����һ�������ж����Ķ����Ʊ�ʾ�к��м���1
* 
*
*
//int count_one(int i);//�������������������������������Բ�������
int main()//������
{
	int a;
	scanf("%d", &a);//����һ�������浽a��
	int count = count_one(a);
	printf("%d�Ķ������к��е�1�ĸ���: %d",a,count);
	return 0;
}
//����1��ģ�ķ���
//int count_one(int i)//����һ���вκ���,��returnһ��int�͵�����
//{
//	int count=0;
//	while (i)
//	{
//		if (i % 2 == 1)//�ж����Ķ������к��м���1
//		{
//			count++;
//		}
//		i = i / 2;
//	}
//	return count;//��count����retuen
//}
//����2�����ư�λ��ķ��� 
//int count_one(int i)
//{
//	int count=0;
//	int j=0;
//	for(j=0;j<32;J++)
//	{
//		if((��n>>j)&1��==1)
//		{
//		count++;
//		}
//	}
//	return count;
//}
//������
//������ķ���
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
/*@����һ���������������������е�ż��������λ���ֱ��ӡ�������������
* 
*/
//void print(int m)//��ӡ��ż������
//{
//	int i = 0;
//	printf("����λ\n");
//	for (i = 31; i >= 0; i-=2)
//	{
//		printf("%d  ", (m >> i) & 1);//���ƺ���1����
//	}
//	printf("\nż��λ\n");
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
//@���P5708_���д��󣬻�δ��ȫ����
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

