//用数组实现字母大小写的转化
#include <stdio.h>
int main()
{
	char str[100]={0};
	scanf("%s",&str);
	int n=0,i;
	while(1)
	{
		if(str[n]==0) break;
		else n++;
	}
	for(i=0;i<n;i++)
	{
		if(str[i]<'Z')
		str[i]+=32;
		else 
		str[i]-=32;
	}
	printf("%s",str);

	return 0;
}