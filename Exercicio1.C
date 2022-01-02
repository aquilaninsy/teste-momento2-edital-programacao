#include <stdio.h> 
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");//Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado

//Área de definição de variaveis
int i,j,k;
int maior = 0, menor =0;
int posMaior =0, posMenor =0;
int aux = 0;
int vetor[6]; // Definição de um vetor do tipo inteiro de tamanho 6

//laço de repetição for para receber dados do tipo inteiro para o vetor de tamanho 6
for(i=0;i<6;i++){
	
	printf("Digite um valor para a %dª posição do Vetor\n",i+1);
	
	scanf("%d",&vetor[i]); 
	

	
	if(i == 0){                  
 	   maior = vetor[i];   //Inicializando a variavel maior com o valor de vetor[i] que no primeiro é Vetor[0]           
       menor = vetor[i];   //Inicializando a variavel menor com o valor de vetor[i] que no primeiro é Vetor[0]   
	 
			  }
			     
				  
	if(vetor[i]>maior){
		maior=vetor[i];
		posMaior=i; //Indica a posição do vetor onde o número foi maior
	
	}	

	
	if(vetor[i]<menor){
		menor=vetor[i];
		posMenor=i;//Indica a posição do vetor onde o número foi menor
		
	}	
		
}

//Laço de repetição for aninhado para ordenação crescente dos valores do vetor
for(i=0;i<6;i++){
	for(j=0;j<6;j++){
	
	
		//Os menores valores serão colocados a esquerda do vetor
		if (vetor[i] < vetor[j]){
			
		aux = vetor[i];
	    vetor[i] = vetor[j];
	    vetor[j] = aux;
    
 	}	


}}
//Mostrando na tela  o valor e a posição do maior número do vetor
printf("\nO valor %d da posição %d é o maior número do vetor\n\n",maior,posMaior);
//Mostrando na tela  o valor e a posição do menor número do vetor
printf("\nO valor %d da posição %d é o menor número do vetor\n\n",menor,posMenor);


//Mostrando na tela o Vetor ordenado de forma crescente	
for (int k = 0; k <6; k++)
            {
              printf("\n vetor[%d] = %d\n", k, vetor[k]);
            }

}
