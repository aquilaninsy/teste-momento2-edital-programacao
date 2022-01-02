#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

int i,j;
int m[3][3];

for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		
		m[i][j]=(i+j);
		
	}
	
}


for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		
		
		printf("valor da posição [%d][%d]=%d\n\n ",i,j,(m[i][j]));
		
	}
	
}






}
