#include <stdio.h>
#include <math.h>

double print_meth(char a[], double b){
	printf("Please enter the %s num : ", a);
	scanf("%lf", &b);
	return b;
}

void formula_meth(double a, double b, double c, double* p, double* q){
	/*
	[-b(+-)/b^2 - 4ac]/2a 
	*/
	double math_1, math_2;
	math_1 = ((b*b) - (4*a*c));
	math_2 = sqrt(math_1);
	*p = (-b+math_2)/(2*a);
	*q = (-b-math_2)/(2*a);
}

int main(void){
	double a, b, c, result_1, result_2;
	a = print_meth("first", a);
	b = print_meth("second", b);
	c = print_meth("third", c);
	printf("The formula is (%.2lfx^2) + (%.2lfx) + (%.2lf) = 0\n", a, b, c);
	
	formula_meth(a, b, c, &result_1, &result_2);
	printf("The answer is %.2lf or %.2lf", result_1, result_2);
	getchar();
	getchar();

	return 0;
}

