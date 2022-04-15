#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//                             strcpy--字符串拷贝
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello" };
//	strcpy(arr1, arr2);           //拷贝字符串strcpy(目的地，原字符串)
//	printf("%s\n", arr1);
//	return 0;
//}


                               //memset-- memery set  内存设置
//  更改一个字符串中的几个字节
//int main()
//{
//    char arr[] = "hello abc";
//    memset(arr, 'x', 5);         // 将arr字符串的前五个字节改为x
//    printf("%s\n", arr);      
//    return 0;
//}


//                              计算两个数的较大值
//int get_max(int x, int y)     // (函数的参数，要与其接受的值的类型相对)
//{
//    int z = 0;
//    if (x > y)
//    {
//        z = x;
//    }
//    else
//    {
//        z = y;
//    }
//    return z;
//}
//
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max=get_max(a, b);
//    printf("max=%d\n", max);
//    return 0;
//}


//                                   交换两个函数的内容
//void get_mid(int x, int y)              //这个函数只需要交换就可以了，不用返回什么，用 void
//{                                       //错误代码，因为x和y有自己的地址
//                                        //a，b进来赋值给x，y 不会改变a和b本身
//    int z = 0;
//    z = y;
//    y = x;
//    x = z;                      
//}
//
//
//
//int main()
//{
//    int a = 2;
//    int b = 1;
//    get_mid(a, b);
//    printf("a=%d\nb=%d\n", a, b);
//    return 0;
//}


void exchange(int* pa, int* pb)
{
    int z = 0;
    z = *pa;
    *pa = *pb;
    *pb = z;
}
int main()
{
    int a = 2;
    int b = 1;
    exchange(&a, &b)  ;                 //这里要用a和b的地址调用函数，通过地址改变a和b的值
    printf("a=%d\nb=%d\n", a, b);
    return 0;
}