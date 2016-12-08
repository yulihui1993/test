#include<iostream>

using namespace std;

//	/************************************************************************
//	Function:       findMaxSubArray()
//	Description:   线性时间法
//	Input:          数组
//	Output:         最大子数组和
//	Return:         最大子数组和
//	Others:         效率
//	************************************************************************/
//
//int findMaxSubArray ( int *a,int length)
//{
//	
//	int temp=-1000;
//	int maxsum;
//	for ( int i=0;i<length;i++)
//	{
//		int sum=0;
//		for( int j=i;j<length;j++)
//		{
//			sum+=a[j];
//			if( sum>temp)
//			{
//				temp=sum;
//
//			}
//
//		}
//		maxsum=temp;
//	}
//	return maxsum;
//}

/************************************************************************
	Function:       findMaxSubArray()
	Description:    动态规划法
	Input:          数组
	Output:         最大子数组和
	Return:         最大子数组和
	Others:         效率
	************************************************************************/

int findMaxSubArray(int *a, int n) {  
	
	int sum=0;
	int temp=-1000;
	for( int i = 0; i < n; i++) 
	{
		sum+=a[i];
		if( sum>temp)
		{
			temp=sum;
		}
        if( sum<0)
		{
			sum=0;
		}

	}
	return temp;
}
	
	





int main()
{
	int a[]={ -13,-9,-25,-20,-3,-16,-23,-18,-20,-7,-12,-5,-22,-15,-4,-7};
	int num=sizeof(a)/sizeof(a[0]);
	cout<<findMaxSubArray(a,num-1)<<endl;
	return 0;
}




