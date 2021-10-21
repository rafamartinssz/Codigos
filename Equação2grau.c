/*
Faça um programa para resolver equações do 2o grau. ax2 + bx + c = 0
A variável a deve ser diferente de zero.
Δ < 0 à não existe raiz real.
Δ = 0 à existe uma raiz real.
x = -b/(2*a).
Δ > 0 à existem duas raízes real.
x1 = (-b+√Δ)/(2*a).
x2 = (-b-√Δ)/(2*a).
*/
#include<stdio.h>
#include<math.h>
int main(){
float del,x,x1,x2,a,b,c;

printf("Este programa ira resolver equacoes do 2o grau ax2 + bx + c = 0, (A variavel 'a' deve ser diferente de 0)\n\n");
printf("Digite os valores de a b c: ");
scanf("%f %f %f",&a,&b,&c);

del=pow(b,2)-4 *(a*c);

if(del<0){
printf("\n\nDelta < 0 - nao existe raiz real.\n\n");
}

else if(del==0){
x=-b/(2*a);
printf("\n\nDelta = 0 -   %.2f\n\n",x);
}

else if(del>0){
x1= (-b+sqrt(del))/(2*a);
x2= (-b-sqrt(del))/(2*a);
printf("\n\nDel > 0 (%.2f) -  x1=%.2f    x2=%.2f \n\n",del,x1,x2);
}
    return 1;
}
