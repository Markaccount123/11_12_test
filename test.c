#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//��һ�δ���Ľ����hehe����Ϊstrlen���ص���һ��size_t = unsigned int ���͵����������������ǵõ���-3�����Ǵ����-3�Ĳ���
//-3�Ĳ�����һ���ܴ�����������Դ�ӡ��Ӧ����hehe

//int main()
//{
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
////��������Ͷ���

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//int Fic(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k >= 1)
//	{
//		return n*Fic(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Fic(n, k);
//	printf("ret = %d", ret);
//	return 0;
//}


//
//A˵�������ҡ�
//
//B˵����C��
//
//C˵����D��
//
//D˵��C�ں�˵
//
//��֪3����˵���滰��1����˵���Ǽٻ���


//ͨ�����跨����Ϊ��������ÿ���˶��п�����������û���жϳ����������
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}



//����Ļ�ϴ�ӡ������ǡ�
//
//
//
//         1
//        1 1
//       1 2 1
//      1 3 3 1
//     1       1
//    1         1
//   1           1
//  1             1
// 1               1
//1                 1
//����˼���϶���Ϊһ��10*10�Ķ�ά����
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//��ʼ��
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if ((i >= 2) && (j >= 1))
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������

//
//
//Aѡ��˵��B�ڶ����ҵ�����
//
//Bѡ��˵���ҵڶ���E���ģ�
//
//Cѡ��˵���ҵ�һ��D�ڶ���
//
//Dѡ��˵��C����ҵ�����
//
//Eѡ��˵���ҵ��ģ�A��һ��

//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b ==2)  + (a==3) ==1)    &&
//							((b==2)   + (e==4) ==1)    &&
//							((c==1)   + (d==2) == 1)   &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))  
//						{
//							if (a*b*c*d*e == 120)  // ��Ϊ������ᷢ�ִ�ӡ�����ܶ��ظ��ģ�����Ҫ���ظ��Ŀ����ų���
//							{
//								printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

