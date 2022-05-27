#include <stdio.h>
void main(){

float salario_bruto, salario_liquido, soma_bruto, soma_liquido, diferenca_salarios;
int cont=0;

do {
  printf("\nInsira o sal%crio do funcion%crio: ", 160, 160);
  scanf("%f", &salario_bruto);
    if (salario_bruto>1) {
      printf("\nO sal%crio l%cquido do funcion%crio %c R$ ", 160, 161, 160, 130);
      cont++;

      if (salario_bruto <= 999) {
        salario_liquido = salario_bruto * 0.9;
        printf("%.2f.\n", salario_liquido);

      } else if (salario_bruto > 999 && salario_bruto <= 1999) {
        salario_liquido = salario_bruto * 0.85;
        printf("%.2f.\n", salario_liquido);

      } else if (salario_bruto > 1999 && salario_bruto <= 9999) {
        salario_liquido = salario_bruto * 0.8;
        printf("%.2f.\n", salario_liquido);

      } else if (salario_bruto > 9999 && salario_bruto <= 99999) {
        salario_liquido = salario_bruto * 0.75;
        printf("%.2f.\n", salario_liquido);

      } else if (salario_bruto > 99999) {
        salario_liquido = salario_bruto * 0.7;
        printf("%.2f.\n", salario_liquido);
      }

    } else {
      printf("\nO sal%crio informado deve ser maior que 1.\n", 160);
    }

soma_bruto += salario_bruto;
soma_liquido += salario_liquido;
diferenca_salarios += (salario_bruto-salario_liquido);

} while(cont<5);

printf("\nA soma dos sal%crios brutos %c R$ %.2f.", 160, 130, soma_bruto);
printf("\nA soma dos sal%crios l%cquido %c R$ %.2f.", 160, 161, 130, soma_liquido);
printf("\nA soma dos tributos pagos %c R$ %.2f.", 130, diferenca_salarios);
}
