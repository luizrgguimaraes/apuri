#include <stdio.h>

int main(void){

    
    char nm_vendedor[80];
    double vl_salariofixo,vl_vendas;
    scanf("%s %lf %lf",nm_vendedor,&vl_salariofixo,&vl_vendas);
    double salario = vl_salariofixo + vl_vendas*0.15;
    printf("TOTAL = R$ %.2f\n",salario);

//teste 2
    /*int cd_funcionario;
    double n_horastrabalhadas, vl_hora;
    scanf("%d %lf %lf",&cd_funcionario,&n_horastrabalhadas,&vl_hora);
    double salario = n_horastrabalhadas*vl_hora;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",cd_funcionario,salario);

    /*double notaA,notaB,notaC;
    scanf("%lf %lf %lf",&notaA,&notaB,&notaC);
    double MEDIA = notaA*0.2 + notaB*0.3 + notaC*0.5;
    printf("MEDIA = %.1f\n",MEDIA);
    
    /*
    double nota1;
    double nota2;
    scanf("%lf %lf",&nota1,&nota2);
    double MEDIA = nota1*0.35 + nota2*0.75;
    MEDIA = MEDIA/1.1;
    printf("MEDIA = %.5f\n",MEDIA);
    return 0;
    
    /*double raio; 
    double pi=3.14159;
    scanf("%lf",&raio);
    double area = pi * raio * raio;
    printf("A=%.4f\n",area);
    return 0;*/

    /*echo "# apuri2" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/luizrgguimaraes/apuri2.git
git push -u origin master*/
}
