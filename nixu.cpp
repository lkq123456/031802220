#include<stdio.h>
int main(){
	int max,i,a[10]={0},n;
	char ch;
	while((ch=getchar())!='\n'){
		i=ch-'0';
		a[i]++;
	}
	max=a[9];
	for(i=8;i>=0;i--){
		max=max>a[i]?max:a[i];
	}
	for(;max>0;max--){
		for(i=9;i>=0;i--){
			if(a[i]==max){
			 while(a[i]--)printf("%d",i);
			}
			else continue;
		}
		
	}
	return 0;
}
