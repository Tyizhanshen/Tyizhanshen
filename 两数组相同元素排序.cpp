//编写一个程序，输入两列数字，要求输出这两列数字中共同的元素，并按照从小到大的顺序排列
//如：
//输入：
//1 2 3 4 5 6 7 8 9 10 99 666
//1 9 8 10 11 6
//输出；
//6 8 9 10
#include <stdio.h>
int main()
{
	int x1[100]={0},x2[100]={0},x3[100]={0};
	int i1=0,i2=0,j,t,n=0;
	while(1)
	{
		scanf("%d",&x1[i1]);
		i1++;
		if(getchar()=='\n') break;
	}
	while(1)
	{
		scanf("%d",&x2[i2]);
		i2++;
		if(getchar()=='\n') break;
	}
	if(i1>i2)
	{for(j=0;j<i2;j++)
	{
		for(t=0;t<i1;t++)
		{
			if(x2[j]==x1[t])
			{
				x3[n]=x2[j];
				n++;
			}
		}
	}
	} 
	else
	{
		for(j=0;j<i1;j++)
	{
		for(t=0;t<i2;t++)
		{
			if(x1[j]==x2[t])
			{
				x3[n]=x1[j];
				n++;
			}
		}
	}
	}
	int k,g,q,temp;
	for(k=0;k<n;k++)
	{
		for(g=k+1,q=k;g<n;g++)
		{
			if(x3[q]>=x3[g])
			q=g;
		}
		if(q!=k)
		{
			temp = x3[k];
			x3[k]=x3[q];
			x3[q]=temp;
		}

	}
	return 0;
}