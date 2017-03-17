#include<stdio.h>
#include<stdlib.h>

typedef struct NO{
//300003
long long v;
struct NO * nxt[30003];
long long wei[30003];
int edg_n[30003];
}no;

int cre(long long m,long long ui,long long vi,long long wi,no ** addre,long long l);
//int sp(long long u,no ** addre);
int main(){

long long n,m,ui,vi,wi,u,l;
no * addre[30003]; //(no *)calloc(30003,sizeof(no));

scanf("%lld %lld",&n,&m);
		for(l=0;l<m;l++){
scanf("%lld %lld %lld",&ui,&vi,&wi);
cre(m,ui,vi,wi,addre,l);
				}
scanf("%lld",&u);

//sp(u,addre);
//test
//test
return 0;
	  }
int cre(long long m,long long ui,long long vi,long long wi,no ** addre,long long l){
		if((int)addre[vi-1] == 0){
//must malloc add
no * ode2 = (no *)malloc(sizeof(no));
ode2->v = vi;
ode2->wei[ui-1] = wi;
ode2->edg_n[ui-1] = l;
addre[vi-1] = ode2;
				         }
		else if((int)addre[vi-1] != 0){
addre[vi-1]->wei[ui-1] = wi;
addre[vi-1]->edg_n[ui-1] = l;

					      }
		if((int)addre[ui-1] == 0){
no * ode1 = (no *)malloc(sizeof(no));
ode1->v = ui;
ode1->nxt[vi-1] = addre[vi-1];
ode1->wei[vi-1] = wi;
ode1->edg_n[vi-1] = l;
addre[ui-1] = ode1;
addre[vi-1]->nxt[ui-1] = addre[ui-1];
					 }
		else if((int)addre[ui-1] != 0){
addre[vi-1]->nxt[ui-1] = addre[ui-1];
addre[ui-1]->nxt[vi-1] = addre[vi-1];
addre[ui-1]->wei[vi-1] = wi;
addre[ui-1]->edg_n[vi-1] = l;
				         }
//test
printf("%lld %lld\n",addre[ui-1]->v,addre[vi-1]->v);
//test
return 0;
	     									   }

int sp(long long u,no ** addre){
long long sett[30003];
long long edg[30003];
long long l,chk=0;


		while(no more v0){
		if(sett[x] == 0){sett[x] = 1;chk;}
		if(sett[x] == 1);

				     }


return 0;
		   }

