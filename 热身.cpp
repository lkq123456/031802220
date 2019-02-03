#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE*fp1,*fp2;
	char a;
	fp1=fopen("Request.txt","r");
	fp2=fopen("output.txt","w");
	while((a=fgetc(fp1))!=EOF) fputc(a,fp2);
	fclose(fp1);
	fclose(fp2); 
	return 0;
} 
