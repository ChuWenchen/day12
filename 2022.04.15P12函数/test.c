#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//                             strcpy--�ַ�������
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello" };
//	strcpy(arr1, arr2);           //�����ַ���strcpy(Ŀ�ĵأ�ԭ�ַ���)
//	printf("%s\n", arr1);
//	return 0;
//}


                               //memset-- memery set  �ڴ�����
//  ����һ���ַ����еļ����ֽ�
//int main()
//{
//    char arr[] = "hello abc";
//    memset(arr, 'x', 5);         // ��arr�ַ�����ǰ����ֽڸ�Ϊx
//    printf("%s\n", arr);      
//    return 0;
//}


//                              �����������Ľϴ�ֵ
//int get_max(int x, int y)     // (�����Ĳ�����Ҫ������ܵ�ֵ���������)
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


//                                   ������������������
//void get_mid(int x, int y)              //�������ֻ��Ҫ�����Ϳ����ˣ����÷���ʲô���� void
//{                                       //������룬��Ϊx��y���Լ��ĵ�ַ
//                                        //a��b������ֵ��x��y ����ı�a��b����
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
    exchange(&a, &b)  ;                 //����Ҫ��a��b�ĵ�ַ���ú�����ͨ����ַ�ı�a��b��ֵ
    printf("a=%d\nb=%d\n", a, b);
    return 0;
}