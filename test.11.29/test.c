#include <stdio.h>
//int main()
//{
//	int money;
//	scanf_s("%d", &money);
//	int total = 0;
//	int empty = 0;
//	total= money;//一开始有多少钱，就可以买多少瓶水
//	empty = money;//有多少钱买多少瓶水，得多少个空瓶；
//	//进行置换
//	/*while (empty >=2)
//	{
//
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//
//    }*/
//	if(money>0)
//	total = 2 * money - 1;//另一种方法；
//	printf("%d", total);
//	return 0;
//} 
//判断是否为上三角矩阵；
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	//int arr[n][n]//变长数组？？？？？？？能这样使用？C99
//	int arr[10][10];
//	int i;
//	////输入
//	for (i = 0;i < n;i++)
//	{
//		int j;
//		for (j = 0;j < n;j++)
//		{
//			scanf_s("%d", &arr[i][j]);
//		}
//		//判断；
//	}
//
//	int flag = 1;//设置一个变量来作为标签，作为是上三角的表示
//	for (i = 0;i <n;i++)
//	{
//		int j;
//		for (j = 0;j < i;j++)
//		{
//			//遍历j<i时的数组即上三角数组；
//			if (arr[i][j] != 0)
//				flag = 0;//如果j<i时的数组中有不为0的数flag就会变成0并且跳出循环；
//			/*	goto end;*/return 0;
//		}
//	}
//	//end:
//	if (flag == 1)//如果flag等于1说明j<i的数数组中都是0；
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//判断两个矩阵相等；
//int main()
//{
//	//要创建两个数组来存放数据；
//	//要根据给的n来确定数组大小；
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	int arr1[10][10];
//	int arr2[10][10];
//	//输入数据；
//	int i;//输入数组1；
//	for (i = 0;i < n;i++)
//	{
//		int j;
//		for (j = 0;j < m;j++)
//		{
//			scanf_s("%d", &arr1[i][j]);
//		}
//	}//输入数组2；在数组2输入的时候就可以进行判断；
//	int flag = 1;//默认arr1==arr2;
//	for (i = 0;i < n;i++)
//	{
//		int j;
//		for (j = 0;j < m;j++)
//		{
//			scanf_s("%d", &arr2[i][j]);
//			if (arr1[i][j] != arr2[i][j])
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}
//将一行n个数字中的奇数放在前面，偶数放在后面
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//首先从左往右找偶数；
//	while (left < right)
//	{
//		while (left<right&&(arr[left] % 2 == 1))//现在这个还有一些bug，等会处理；
//		{//如果一直是奇数或者偶数left一直+++就可能会越界；所以加上条件；left<right
//			left++;
//		}//如果找到偶数便会跳出循环，停下。
//		//再从右往左找奇数
//		while (left<right&&(arr[right] % 2 == 0))
//		{
//			right--;
//		}//如果找到奇数便会停下跳出循环。
//		if (left < right)//(在这个条件下进行置换，超出这个范围不进行置换)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			//置换完后left要右移，right要左移；
//			left++;
//			right--;//现在只置换了一次这个置换过程也是个循环体，循环条件也是left<right
//		}
//	}
//
//}
//int main()
//{
//	//设置一个数组来存放这组数据；
//	int n;
//	scanf_s("%d", &n);
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	move(arr, sz);//调整
//	
//	//打印
//	//输入
//	
//	for (i = 0;i < n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//	
//}合并有序序列；有两个升序的序列，分别为n，m个，然后合并这两个序列并且合并后的序列也为升序//
//这个需要第三个数组来存放这两个数组的数据；
//int main()
//{
//	//创建两个数组
//	int n, m;
//	scanf_s("%d %d", &n, &m);
//	int arr1[10];
//	int arr2[10];
//	int arr3[20];
//	//输入arr1
//	int i;
//	int j = 0;
//	int k = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf_s("%d", &arr1[i]);
//	}//输入arr2
//	for (j=0;j<m;j++)
//	{
//		scanf_s("%d", &arr2[j]);
//	}//输入完对这两个数组进行遍历，比较arr1[i]和arr[j]大小，小的先放在arr3中里存着大的放后面，先遍历完的，数组里的数应该都放完，还没遍历完的直接放最后面
//	
//   while (i < n&& j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d", arr1[i]);
//			i++;
//			/*arr1[i] = arr3[k];
//			i++;
//			k++;*/
//		}
//		else
//		{
//			printf("%d", arr2[j]);
//			j++;
//			/*arr2[j] = arr3[k];
//			j++;
//			k++;*/
//		}
//	}
//	if (i == n)
//	{//i先遍历完j还剩下几个元素要直接放在arr3中
//		while (j < m)
//		{
//			printf("%d", arr2[j]);
//			j++;
//			/*arr2[j] = arr3[k];
//			j++;
//			k++;*/
//		}
//	}
//	else
//		{//j先遍历完i还剩下几个元素要直接放在arr3中
//			while (i < n)
//			{
//				printf("%d", arr1[i]);
//				i++;
//				/*
//				arr1[i] = arr3[k];
//				i++;
//				k++;*/
//			}
//		}
//	for (k = 0;k < n + m;k++)
//	{
//		printf("%d ", arr3[k]);
//	}
//
//	return 0;
//}
//int main() {
//	       int arr1[1000];
//	       int arr2[1000];
//	       int arr3[2000];
//	    int n = 0;
//	    int m = 0;
//	    //输入
//	    scanf_s("%d %d", &n, &m);
//	   /* int arr1[n];
//	    int arr2[m];
//	    int arr3[n + m];*/
//	    //arr1的输入
//	    int i = 0;
//	    for (i = 0; i < n; i++)
//	    {
//	        scanf_s("%d", &arr1[i]);
//	    }
//	    //arr2的输入
//	    for (i = 0; i < m; i++)
//	    {
//	        scanf_s("%d", &arr2[i]);
//	    }
//	    //合并数组
//	    i = 0;
//	    int j = 0;
//	    int k = 0;
//	    while (i < n && j < m)
//	    {
//	        if (arr1[i] < arr2[j])
//	        {
//	            printf("%d ", arr1[i]);
//	            i++;
//	        }
//	        else
//	        {
//	            printf("%d ", arr2[j]);
//	            j++;
//	        }
//	    }
//	    if (i == n)
//	    {
//	        //把arr2中剩余的元素放在arr3中
//	        while (j < m)
//	        {
//	            printf("%d ", arr2[j]);
//	            j++;
//	        }
//	    }
//	    else
//	    {
//	        //把arr1中剩余的元素放在arr3中
//	        while (i < n)
//	        {
//	            printf("%d ", arr1[i]);
//	            i++;
//	        }
//	    }
//	    return 0;
//	}
//int main()
//{
//	int arr1[1000];
//	int arr2[1000];
//	int arr3[2000];
//	int n, m;
//	scanf_s("%d %d", &n, &m);
//	
//	int k = 0;
//	//输入arr1
//	
//	for (int i = 0;i < n;i++)
//	{
//		scanf_s("%d", &arr1[i]);
//	}
//	//输入arr2
//	for (int i = 0;i < m;i++)
//	{
//		scanf_s("%d", &arr2[i]);
//	}
//	//合并
//	int i = 0;
//	int j = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k] = arr1[i];
//			i++;
//			k++;
//		}
//		else
//		{
//			arr3[k] = arr3[j];
//			j++;
//			k++;
//		}
//	}
//	if (i == n)
//	{
//		while (j < m)
//		{
//			arr3[k] = arr2[j];
//			j++;
//			k++;
//		}
//	}
//	else
//	{
//		while (i < n)
//		{
//			arr3[k] = arr1[i];
//			i++;
//			k++;
//		}
//	}
//	for (k = 0;k < n + m;k++)
//	{
//		printf("%d", arr3[k]);
//	}
//
//
//	return 0;
//}
int main()
{
	int n;
	scanf_s("%d", &n);
	int arr[10];
	int i;
	for (i = 0;i < n;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int flag1 = 0;//用来默认是升序；
	int flag2 = 0;//用来默认是降序；
	for (i = 1;i < n;i++)
	{
		if (arr[i-1]<arr[i])
		{
			flag1 = 1;
		}
		else if(arr[i-1]>arr[i]);
		{
			flag2 = 1;
		}
	}
	if (flag1 + flag2 < 2)
		printf("sorted\n");
	else
		printf("unsorted\n");
	return 0;
}
//int main()
//{
//    int n = 0;
//    scanf_s("%d", &n);
//    int arr[10];
//    int i = 0;
//    int flag1 = 0;//标记升序
//    int flag2 = 0;//标记降序
//
//    for (i = 0; i < n; i++)
//    {
//        scanf_s("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i - 1] < arr[i])
//            {
//                flag1 = 1;
//            }
//            else if (arr[i - 1] > arr[i])
//            {
//                flag2 = 1;
//            }
//        }
//
//    }
//    if (flag1 + flag2 < 2)
//        printf("sorted\n");
//    else
//        printf("unsorted\n");
//    return 0;
//}