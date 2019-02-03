#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct a{
	char in[7];                    //a 结构体是用于读入所有信息   in是发信人 out是接受人 m是信息量
	char out[7];                         
	int m;
};
struct b{                              //b黑客结构体
	char name[7];
};
int main()
{
	int i=0,c,t=0,j,flag=0,n=0;
	struct a fa[10000];
	struct b he[100];
	FILE* fp=fopen("Request.txt","r");                                    //读文件存信息
	while(3==fscanf(fp,"%s %s %d",&fa[i].in,&fa[i].out,&fa[i].m)) i++;
	c=i-1;
	fclose(fp);
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)				
		{
			if(strcmp(fa[i].in ,fa[j].in)==0)	t=t+fa[j].m;        //将同一个发信人的信息量累加，t初始值为0因此j从0开始
		}
		if(t>1500)                         //判断信息量是否超标
		{	
			for(j=0;j<=n;j++)						
			{
			if(strcmp(fa[i].in,he[j].name)==0)	{flag=1;break;}    //同一个人 从头便利的话会被重复算入黑客，因此我们对已被定位黑客的人标记使再遇到时不会重复计算
			}
			if(!flag)								
			{strcpy(he[n].name,fa[i].in);n++;}
			else flag=0;
		}	
		t=0;
	}
	printf("%d\n",n);
	for(i=0;i<n;i++) printf("%s\n",he[i].name);	
	return 0;
}
