#include <stdio.h>
#include<stdlib.h>
#include<math.h>

float rootsOfQuadEquation(){
	float a,b,c,root1,root2;

	printf("Enter the constants of the equation: ");
	scanf("%f %f %f", &a,&b,&c);

	root1 = (-b + sqrt((b*b)-4*a*c))/2*a;
	root2 = (-b - sqrt((b*b)-4*a*c))/2*a;

	if(root1||root2>0){
		printf("The roots of the equation are: root1: %f", root1 );
		printf("\n root2: %f", root2);
	} else{
		root1 && root2 < 0;
		printf("Roots of the equation are imaginary");
	}
	return 0;
}

	int main(){

		setvbuf( stdout, NULL, _IONBF, 0 );
		rootsOfQuadEquation();



}
