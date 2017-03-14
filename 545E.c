#include<stdio.h>
#include<stdlib.h>

typedef struct NO{
//300003
long long v;
struct NO * nxt[30003];
long long wei[30003];
}no;

int cre(long long m,long long ui,long long vi,long long wi,no ** addre);
//int sp(long long u);
int main(){

long long n,m,ui,vi,wi,u,l;
no * addre[30003]; //(no *)calloc(30003,sizeof(no));

scanf("%lld %lld",&n,&m);
		for(l=0;l<m;l++){
scanf("%lld %lld %lld",&ui,&vi,&wi);
cre(m,ui,vi,wi,addre);
				}
scanf("%lld",&u);

//sp(u);
//test
//test
return 0;
	  }

/*int sp(long long u){



return 0;
		   }*/
int cre(long long m,long long ui,long long vi,long long wi,no ** addre){
		if((int)addre[vi-1] == 0){
no * ode2 = (no *)malloc(sizeof(no));
addre[vi-1] = ode2;
				         }
		if((int)addre[ui-1] == 0){
no * ode1 = (no *)malloc(sizeof(no));
ode1->v = ui;
ode1->nxt[vi-1] = addre[vi-1];
ode1->wei[vi-1] = wi;
addre[ui-1] = ode1;
					 }
		if((int)addre[ui-1] != 0){
addre[ui-1]->nxt[vi-1] = addre[vi-1];
addre[ui-1]->wei[vi-1] = wi;
				         }

return 0;
	     								}
