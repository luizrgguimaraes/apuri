#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.14159

int esfera(){
	double raio, volume;
	scanf("%lf",&raio);
    volume = (double) 4/3*PI*raio*raio*raio;
	printf("VOLUME = %.3f\n",volume);
	return 0;
}
int area(){
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",A*C/2,PI*pow(C,2),(A+B)/2*C,B*B,A*B);
    return 0;
}
double maiorde2(int A,int B){
    return (A+B+fabs(A-B))/2;
}
int maiordetres(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    //printf("%.0f\n",A+B+(fabs(A-B)));
    A = maiorde2(A,B);
    printf("%.0f eh o maior\n",maiorde2(A,C));
    return 0;
}
int consumo(){
    int X;
    double Y;
    scanf("%d %lf",&X,&Y);
    //printf("%f\n",Y);
    printf("%.3f km/l\n",X/Y);
    return 0;
}
int distanciadoispontos(){
    double x1,x2,y1,y2;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    printf("%.4f\n",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
    //printf("%.4f\n",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
    return 0;
}
int distanciacarros(){
    int distancia;
    scanf("%d",&distancia);
    printf("%d minutos\n",distancia*2);
    return 0;
}
int gastocombustivel(){
    /*qtdecombustivel=distanciapercorrida/rendimento;
    distanciapercorrida = tempo * velocidade
    qtdecombustivel = tempo * velocidade / rendimento;
    */
    int tempo,velocidade;
    scanf("%d %d",&tempo,&velocidade);
    printf("%.3f\n",tempo*velocidade/12.0);
    return 0;
}
int cedulas(){
    int valor;
    scanf("%d",&valor);
    int valorinicial = valor;
    int cem = valor/100;valor%=100;
    int cinquenta = valor/50;valor%=50;
    int vinte = valor/20;valor%=20;
    int dez = valor/10;valor%=10;
    int cinco = valor/5;valor%=5;
    int dois = valor/2;valor%=2;
    int um = valor;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",valorinicial,cem,cinquenta,vinte,dez,cinco,dois,um);
    return 0;
}

int convertetempo(){
    int segundos;
    int horas;
    int minutos;
    scanf("%d",&segundos);
    horas=segundos/(60*60);
    segundos=segundos%(60*60);
    minutos=segundos/(60);
    segundos=segundos%60;
    printf("%d:%d:%d\n",horas,minutos,segundos);
    return 0;
}
int idade(){
    int dias;
    int meses;
    int anos;
    scanf("%d",&dias);
    anos=dias/(365);
    dias=dias%(365);
    meses=dias/(30);
    dias=dias%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,dias);
    return 0;
}
int selecao1(){
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if((B>C)&&(D>A)&&((D+C)>(A+B))&&(C>0)&&(D>0)&&((A%2)==0))
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");
    return 0;
}
int bhaskara(){
    double A,B,C;
    double delta;
    scanf("%lf %lf %lf",&A,&B,&C);
    delta = B*B-4*(A*C);
    if(delta<0||A==0){
        printf("Impossivel calcular\n");
        return 0;
    }
    printf("R1 = %.5f\n",(((-1*B)+sqrt(delta))/(2*A)));
    printf("R2 = %.5f\n",(((-1*B)-sqrt(delta))/(2*A)));
    return 0;
}
int main(void){
	bhaskara();
}

