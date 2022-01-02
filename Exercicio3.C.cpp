#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

int i,j;
int a[3][2]= {1,2,3,4,5,6};
int b[3][2]= {1,2,3,4,5,6};
int c[3][2];



for(i=0;i<3;i++){
	for(j=0;j<2;j++){
		
		printf("Digite um valor para a posição [%d][%d] da Matriz A \n",i,j,(a[i][j]));
		scanf("%d",&a[i][j]);
		printf("Digite um valor para a posição [%d][%d] da Matriz B \n",i,j,(b[i][j]));
		scanf("%d",&b[i][j]);
		
		c[i][j]=(a[i][j])+(b[i][j]);
		
	}
}


printf("_________________________________________\n");
for(i=0;i<3;i++){
	for(j=0;j<2;j++){
		
		printf("MATRIZ A -> valor da posição [%d][%d]=%d\n\n ",i,j,(a[i][j]));

	}
	
}
printf("__________________________________________\n");
for(i=0;i<3;i++){
	for(j=0;j<2;j++){
		
	
	printf("MATRIZ B -> valor da posição [%d][%d]=%d\n\n ",i,j,(b[i][j]));
	
	}
	
}
printf("__________________________________________\n");
for(i=0;i<3;i++){
	for(j=0;j<2;j++){
		
	printf("MATRIZ C -> valor da posição [%d][%d]=%d\n\n ",i,j,(c[i][j]));
	}
	
}





}
