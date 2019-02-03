#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct a{
	char in[7];
	char out[7];
	int m;
};
struct b{
	char name[7];
};
int main()
{
	int i=0,c,t=0,j,flag=0,n=0;
	struct a fa[10000];
	struct b he[100];
	FILE* fp=fopen("Request.txt","r");
	while(3==fscanf(fp,"%s %s %d",&fa[i].in,&fa[i].out,&fa[i].m)) i++;
	c=i-1;
	fclose(fp);
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)				
		{
			if(strcmp(fa[i].in ,fa[j].in)==0)	t=t+fa[j].m;
		}
		if(t>1500)
		{	
			for(j=0;j<=n;j++)						
			{
				if(strcmp(fa[i].in,he[j].name)==0)	
				{
					flag=1;
					break;	
				}
			}
			if(!flag)								
			{
				strcpy(he[n].name,fa[i].in);
				n++;
			}
			else flag=0;
		}	
		t=0;
	}
	printf("%d\n",n);
	for(i=0;i<n;i++) printf("%s\n",he[i].name);	
	return 0;
}
