#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern int Add(int x, int y);
 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	int c = Add(a, b);
//	printf("c=%d\n",c);
//	return 0;
//}







//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}








//Ԥ�������

//int main()
//{
//	//printf("%s\n",__FILE__);
//	//printf("%d\n", __LINE__);//53
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	
//	
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n",__FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}









//#define

//#define MAX 100
//#define STR "hehe"
//#define do_forever for(;;)
//int main()
//{
//	do_forever;
//	//int max = MAX;
//	//int max=100;
//	//printf("%d\n",max);
//	//printf("%s\n",STR);
//	return 0;
//}









//#define �����
//#define SQUARE(X) X*X   //(X)*(X)
//int main()
//{
//	//int ret = SQUARE(5);
//	////int ret = 5 * 5;
//	//printf("ret=%d\n",ret);
//	int ret = SQUARE(5 + 1);
//	printf("ret=%d\n",ret);//5+1*5+1=11
//	return 0;
//}






//#define MAX 100
//#define DOUBLE(X) X+X//((X)+(X))
//int main()
//{
//	int a = 5;
//	//int ret = 10 * DOUBLE(a);//10*5+5=55
//	int ret = 10 * DOUBLE(MAX);
//	printf("%d\n",ret);
//	printf("MAX=%d\n",MAX);//��һ��MAX���ᱻ�滻(�ַ������������ݲ���������)
//	return 0;
//}













//#��##

//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is &d\n", a);
//	print(a);
//	print(b);
//	return 0;
//}









//#define PRINT(X) printf("the value of "#X" is %d\n",X)  
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello ""world\n");
//	printf("hel""lo ""world\n");*/
//	
//	int a = 10;
//	int b = 20;
//	PRINT(a);//printf("the value of""a""is %d\n",a);
//	PRINT(b);//printf("the value of""b""is %d\n",a);
//	return 0;
//}











#define CAT(X,Y) X##Y
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n",class84);
//	printf("%d\n",CAT(Class,84));
//	//printf("%d\n",Class##84);
//	//printf("%d\n",Class84);
//	return 0;
//}












//�������õĺ����

//#define	MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//	printf("%d\n",max);//12
//	printf("%d\n",a);//11
//	printf("%d\n",b);//13
//	return 0;
//}






////��ķ�ʽ
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
////������ʽ
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ڵ��õ�ʱ����к������úͷ��صĿ���
//	int max = Max(a, b);
//	printf("max=%d\n",max);
//	//Ԥ����׶ξ�������滻	
//	//û�к����ĵ��úͷ��صĿ���
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}








////����Դ�����
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//	return 0;
//}










//#define MAX 100
//int main()
//{
//	printf("MAX=%d\n",MAX);
//#undef MAX //�����Ƴ�һ���궨��
//	//printf("MAX=%d\n",MAX);error
//	return 0;
//}











//��������

//1.ifdef��������

//#define DEBUG
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ",arr[i]);
//#endif
//	}
// return 0;
//}








//2.#if��������

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1 //#if����������Ϊ��,��ִ����������,��Ϊ����ִ��
//		printf("%d ",arr[i]);
//#endif
//	}
// return 0;
//}



//���֧��������
//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==1
//	printf("hehe\n");
//#else 
//	printf("�ٺ�\n");
//#endif
//	return 0;
//}











//3.�ж��Ƿ񱻶���  #if defined(symbol) �ȼ��� #ifdef symbol

//#define DEBUG 0
//int main()
//{
////#if defined(DEBUG)  //1
////	printf("hehe\n");
////#endif
//
////#ifdef DEBUG       //2
////	printf("hehe\n");
////#endif
//
////#if !defined(DEBUG)  //1�ķ���
////	printf("hehe\n");
////#endif
//
////#ifndef DEBUG   //2�ķ���
////	printf("hehe\n");
////#endif
//	return 0;
//}








//4.Ƕ����������ָ��












