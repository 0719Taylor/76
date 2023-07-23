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








//预定义符号

//int main()
//{
//	//printf("%s\n",__FILE__);
//	//printf("%d\n", __LINE__);//53
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	
//	
//	//写日志文件
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









//#define 定义宏
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
//	printf("MAX=%d\n",MAX);//第一个MAX不会被替换(字符串常量的内容并不被搜索)
//	return 0;
//}













//#和##

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












//带副作用的宏参数

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






////宏的方式
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
////函数方式
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数在调用的时候会有函数调用和返回的开销
//	int max = Max(a, b);
//	printf("max=%d\n",max);
//	//预处理阶段就完成了替换	
//	//没有函数的调用和返回的开销
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}








////宏可以传类型
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
//#undef MAX //用于移除一个宏定义
//	//printf("MAX=%d\n",MAX);error
//	return 0;
//}











//条件编译

//1.ifdef条件编译

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








//2.#if条件编译

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1 //#if后面的语句若为真,则执行下面的语句,若为假则不执行
//		printf("%d ",arr[i]);
//#endif
//	}
// return 0;
//}



//多分支条件编译
//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==1
//	printf("hehe\n");
//#else 
//	printf("嘿嘿\n");
//#endif
//	return 0;
//}











//3.判断是否被定义  #if defined(symbol) 等价于 #ifdef symbol

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
////#if !defined(DEBUG)  //1的反例
////	printf("hehe\n");
////#endif
//
////#ifndef DEBUG   //2的反例
////	printf("hehe\n");
////#endif
//	return 0;
//}








//4.嵌套条件编译指令












