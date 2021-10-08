#include <string.h>
#include <stdio.h>
int main()
{
	char str[100]={0},str2[100]={0};
	scanf("%s",&str);
	int n=0,i,x;
	while(1)
	{
		if(str[n]==0) break;
		else n++;
	}
	x=n;
	for(i=0;i<x;i++)
	{
		str2[i]=str[n-1];
		n--;
	}
	if(strcmp(str,str2)==0)
	printf("yes");
	else
	printf("no");
	return 0;
}