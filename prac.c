#include<stdio.h>
#include<stdlib.h>

int main(){

int * l;
int i;

l = (int *)malloc(sizeof(int)*3);
l[0] = 1;
printf("%d\n",l[0]);
l = (int *)realloc(l,sizeof(int)*5);

for(i=0;i<5;i++)printf("%d\n",l[i]);
return 0;
	}


