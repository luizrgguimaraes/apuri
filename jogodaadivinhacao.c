#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    int palpite;
    int tentativa=1;
    int maxtentativas = 10;
    srand(time(NULL));int segredo = rand()%100;
       
    while(tentativa <= maxtentativas){
        
        printf("Digite um valor inteiro entre 0 e 100 (Tentativa %d de %d):",tentativa,maxtentativas);
        scanf("%d",&palpite);        
        if(palpite < 0 || palpite > 100)
                continue;
        if(palpite == segredo){
            printf("YOU WIN !!!");
            return 0;
        }
        if(tentativa>=maxtentativas)break;
        if(palpite>segredo){
            printf("(DICA: Tente um menor)\n");
        }else{
            printf("(DICA: tente um maior)\n");
        }
        tentativa++;
    }
    printf("GAME OVER !!!\n");
}