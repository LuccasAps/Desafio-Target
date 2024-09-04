#include <stdio.h>

int main(){
    float SP=67836.43, RJ=36678.66, MG=29229.88, ES=27165.48, Outros=19849.53,total;
    total = SP+RJ+MG+ES+Outros;
    printf("A porcentagem do estado de SP eh:%.2f\n",(SP/total)*100);
    printf("A porcentagem do estado de RJ eh:%.2f\n",(RJ/total)*100);
    printf("A porcentagem do estado de MG eh:%.2f\n",(MG/total)*100);
    printf("A porcentagem do estado de ES eh:%.2f\n",(ES/total)*100);
    printf("A porcentagem de outros estados eh:%.2f\n",(Outros/total)*100);

    return 0;
}
