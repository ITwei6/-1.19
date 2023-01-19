#include <stdio.h>
//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));
//	//16
//	//a为数组名，但在sizeof(数组名)表示的计算整个数组的大小
//	printf("%d\n", sizeof(a + 0));
//	//4或8
//	//首元素地址
//	printf("%d\n", sizeof(*a));
//	//4
//	//首元素解引用--第一个元素1的大小为4字节
//	printf("%d\n", sizeof(a + 1));
//	//4或8
//	//第二个元素的地址
//	printf("%d\n", sizeof(a[1]));
//	//4
//	//第二个元素2，4字节
//	printf("%d\n", sizeof(&a));
//	//4或8
//	//&数组名表示取出的是整个数组的地址，地址的大小就是4或8
//	printf("%d\n", sizeof(*&a));
//	//16
//	//*和&抵消还是a，sizeof(数组名)表示计算整个数组大小
//	printf("%d\n", sizeof(&a + 1));
//	//4或8
//	//&a取出的是整个地址大小，+1也是加上整个数组地址大小，但地址大小就是4或8
//	printf("%d\n", sizeof(&a[0]));
//	//4或8
//	//a[0]就是   *(a+0)就是第一个元素，然后再取地址，就是首元素地址了
//	printf("%d\n", sizeof(&a[0] + 1));
//	//4或8
//	//第二个地址
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));
//	//6
//	//sizeof(数组名)表示计算的是整个数组大小为6字节
//	printf("%d\n", sizeof(arr + 0));
//	//4或8
//	//这里arr+0表示首元素地址
//	printf("%d\n", sizeof(*arr));
//	//1
//	//这里的arr表示首元素地址，*arr表示第一个元素'a'
//	printf("%d\n", sizeof(arr[1]));
//	//1
//	//表示第二个元素'b'
//	printf("%d\n", sizeof(&arr));
//	//4或8
//	//&arr表示取出的是整个数组地址，但还是地址
//	printf("%d\n", sizeof(&arr + 1));
//	//4或8
//	//&arr表示取出的整个数组大小，+1表示加上整个数组大小地址
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//4或8
//	//第二个元素地址
//	printf("%d\n", strlen(arr));
//	//这里要注意strlen是专门用来计算字符大小的函数，遇到'\0'停止，而arr这个数组没有\0
//	//所以这个为随机值
//	printf("%d\n", strlen(arr + 0));
//    //无\0,所以为随机值
//	printf("%d\n", strlen(*arr));
//	//对首元素解引用，访问的是第一个元素，strlen('a')->strlen('97')---非法访问
//	//strlen()里面放的应该是一个地址，然后strlen跟着这个地址往后找，找到\0就停止了
//	//但这里strlen('a')里放的不是地址，而是97这个数，所以造成非法访问。
//	printf("%d\n", strlen(arr[1]));
//	//第二个元素strlen('b')->strlen('97')---也是非法访问。
//	printf("%d\n", strlen(&arr));
//	//&arr表示取出的是整个数组地址，但不知道后面是否有\0，所以还是随机值
//	printf("%d\n", strlen(&arr + 1));
//	//这里的arr表示首元素地址，&首元素地址，取出一个地址，这个地址指向的是arr首元素地址，再+1呢，也不知道这个地址是啥了
//	//还是随机值
//	printf("%d\n", strlen(&arr[0] + 1));
//	//&arr[0]+1，第二个元素地址，后面无\0，为随机值。
//
//	return 0;
//int main()
//{
//	char arr[] = "abcdef";
//	//这里是有\0的
//	printf("%d\n", sizeof(arr));
//	//7
//	//sizeof()计算整个数组大小,\0也算大小而strlen不算\0
//	printf("%d\n", sizeof(arr + 0));
//	//4或8
//	//首元素地址
//	printf("%d\n", sizeof(*arr));
//	//第一个元素大小 1
//	printf("%d\n", sizeof(arr[1]));
//	//第二个元素大小 1
//	printf("%d\n", sizeof(&arr));
//	//&arr取出的是整个数组的地址，还是地址
//	printf("%d\n", sizeof(&arr + 1));
//	//4或8
//	//地址
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//4或8
//	//第二个元素地址
//	printf("%d\n", strlen(arr));
//	//首元素地址，后面有\0可以停止
//	//6
//	printf("%d\n", strlen(arr + 0));
//	//6
//	//首元素地址
//	printf("%d\n", strlen(*arr));
//	//第一个元素strlen(a)-->strlen(97)
//	//非法访问了
//	printf("%d\n", strlen(arr[1]));
//	//第二个元素
//	//非法访问
//	printf("%d\n", strlen(&arr));
//	//6
//	//&arr取出的是整个数组地址，但&arr地址和首元素地址是一样的然后可以找到\0
//	printf("%d\n", strlen(&arr + 1));
//	//随机值
//	//&arr取出的是整个地址，+1，跳过整个数组地址，不知道后面是否有\0
//	printf("%d\n", strlen(&arr[0] + 1));
//	//第二个元素地址
//	//5
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
////  p表示字符指针，指向的是首元素的地址
//	printf("%d\n", sizeof(p));
//	//4或8
//	//计算首元素地址大小
//	printf("%d\n", sizeof(p + 1));
//	//4或8
//	//第二个元素地址
//	printf("%d\n", sizeof(*p));
//	//1
//	//第一个元素a
//	printf("%d\n", sizeof(p[0]));
//	//1
//	//第一个元素a
//	printf("%d\n", sizeof(&p));
//	//4或8
//	//&p是二级指针，指向的是a的地址的地址
//	printf("%d\n", sizeof(&p + 1));
//	//4或8 
//	//地址
//	printf("%d\n", sizeof(&p[0] + 1));
//	//4或8
//	//第二个元素的地址
//	printf("%d\n", strlen(p));
//	//6
//	//p表示首元素地址，strlen直达\0停止
//	printf("%d\n", strlen(p + 1));
//	//5
//	//从第二个元素地址开始
//	//printf("%d\n", strlen(*p));
//	////*p表示a
//	////非法访问了
//	//printf("%d\n", strlen(p[0]));
//	////非法访问
//	////strlen(a)
//	printf("%d\n", strlen(&p));
//	//二级指针，指向首元素的地址的地址
//	//所以为随机值
//	printf("%d\n", strlen(&p + 1));
//	//随机值
//	printf("%d\n", strlen(&p[0] + 1));
//	//第二个元素地址
//	//5
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(&p));
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//48
//	//sizeof(数组名)表示计算的整个数组大小
//	printf("%d\n", sizeof(a[0][0]));
//	//4
//	//第一行第一个元素大小
//	printf("%d\n", sizeof(a[0]));
//	//a[0]表示第一行数组名，sizeof(数组名)表示计算的是第一行数组大小
//	//16
//	printf("%d\n", sizeof(a[0] + 1));
//	//a[0]表示第一行数组名，但没有单独放进sizeof（）中也没有&，所以表示首元素地址，首元素地址+1表示第二个元素地址
//	//4或8
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//4
//	//（a[0]+1）表示第一行第二个元素地址，解引用访问第二个元素
//	printf("%d\n", sizeof(a + 1));
//	//a是数组名，表示首元素地址，表示第一行的数组地址，+1表示第二行地址
//	//4或8
//	printf("%d\n", sizeof(*(a + 1)));
//	//16
//	//(a+1)表示第二行地址，解引用表示整个第二行元素
//	printf("%d\n", sizeof(&a[0] + 1));
//	//a[0]表示第一行数组名，&数组名，表示取出的是第一行整个地址，+1跳过整个第一行数组地址大小所以表示第二行地址
//	//4或8
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//16
//	//第二行数组地址解引用
//	printf("%d\n", sizeof(*a));
//	//a数组名，没有单独放进sizeof中也没有&，所以表示的是首元素地址，表示第一行地址
//	//4或8
//	printf("%d\n", sizeof(a[3]));
//	//arr[3]表示第四行数组名，单独放进sizeof（）内部表示计算整个数组大小
//	// a[3]类型是int[4]----sizeof(int[4])  
//	// 答案是16，而不是越界访问
//	//根据类型来计算大小，不会真实访问内部空间
//	//表达式不参与运算，不进行计算
//	return 0;
//}

//既不是单独放进sizeof()内部，有没有&，所以其他的都是首元素地址。
//sizeof（）内部的表达式不参与运算？
//int main()
//{
//
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { 0 };
//	printf("%d", sizeof(arr[3]));
//	return 0;
//}
int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    int* ptr = (int*)(&a + 1);
    printf("%d,%d", *(a + 1), *(ptr - 1));
    return 0;
}
//程序的结果是什么？