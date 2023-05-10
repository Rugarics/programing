#include<stdio.h>
int main(){

int dodo, gogo;
int total, deposit, change, rest, menu;
int w500, w100, w50, w10;
int cnt_dodo, cnt_gogo;
while(1)
{
    printf("dodo=w70, gogo=30.\n");
    printf("number dodo\n");
    scanf("%d", &cnt_dodo);
    printf("number gogo\n");
    scanf("%d", &cnt_gogo);
    dodo = 70*cnt_dodo;
    gogo = 30*cnt_gogo;
    total= dodo + gogo;
    printf("total %d\n", total);
    printf("input deposit.\n");
    scanf("%d", &deposit);
    if(deposit>total){
        change = deposit -total;
        w500= change / 500;
        w100 = change%500/100;
        w50 = change%500%100/50;
        w10 = change%500%100%50/10;
        printf("dodo total:%d\n",dodo);
        printf("gogo total:%d\n",gogo);
        printf("rest:%d\n", change);
        printf("#### min coin number ####\n\n");
        printf("w500:%d\n", w500);
        printf("w100:%d\n", w100);
        printf("w50:%d\n", w50);
        printf("w10:%d\n", w10);
        printf("\n#########################\n\n");
        printf("continue:1, again:0");
        scanf("%d",&menu);
        if(menu==0) break;
        else continue;
    }
    else{
        printf("deposit not enough, again 1, turn off 0");
        scanf("%d", &menu);
        if(menu==0) break;
        else continue;
    }
}

return 0;
}