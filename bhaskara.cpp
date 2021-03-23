//Entrada: a, b, c
//Saida: x1 e x2
//Função: Cálcular Bhaskara

// x1 = (-(b) + sqrt(b*b - 4*a*c)) / (2*a)
// Elevar numero: pow(numero,elevado)
// Exemplo: pow(3,5) = 3 elevado a 5 pow(base, expoente);
// \n - Enter
// \t - Tab
// %.Vlf - Retorna o lf (double) porém apenas com V casas depois da vírgula 
// V = Número de casas; Exemplo: %.2lf; output: 2.00
// Se delta > 0 = Equação possui 2 raízes REAIS
// Se delta <= 0 = Equação não possui raízes
#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, x1, x2, delta; //int %d ou %i -> float %f -> double %lf
	
	printf("Digite o valor de A: ");
	scanf("%lf", &a);
	printf("Digite o valor de B: ");
	scanf("%lf", &b);
	printf("Digite o valor de C: ");
	scanf("%lf", &c);
	
	delta = (pow(b, 2)) - 4*a*c;
	
	if(delta < 0) {
		printf("Não é possivel calcular quando o DELTA está negativo");
		return 0;
	}
	
	x1 = (-(b) + sqrt(pow(b,2) - 4*a*c)) / (2*a);
	x2 = (-(b) - sqrt(pow(b,2) - 4*a*c)) / (2*a);
	
	printf("X1 = %.2lf \t X2 = %.4lf", x1, x2);
	
	return 0; //Retorna a Função
}
