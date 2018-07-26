#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTOS 5

void Insertion(int *array){
    int i=0,j=0,elemento;

     for(i=1 ; i<(NUM_ELEMENTOS); i++){
        elemento = array[i];
        j=i;

        while(j>0 && array[j-1] > elemento){
            array[j] = array[j-1];
            j--;
        }
        array[j] = elemento;
    }
}

void Selection(int *array){
    int i=0, j=0,aux=0, aux2=0;
    for(i ; i < (NUM_ELEMENTOS -1) ; i++){
        //aux = i;

        for (j = (1+i); j < NUM_ELEMENTOS ; j++){
            aux = array[i] < array[j] ? i : j; //salva a posição que tem o menor numero
            
            aux2 = array[i];
            array[i] = array[aux];
            array[aux] = aux2;
            
        }        
    }
}

void Imprime(int *array){
    int k=0;
    
    for (k ; k<5 ; k++){
        printf(" |%d| ", array[k]);
    }
    puts("");
}

int main(){

int x=0, y=0;
int array[NUM_ELEMENTOS] = {21,32,34,44,67}; //melhor caso
int array2[NUM_ELEMENTOS] = {1, 15, 2, 1, 89}; //mediano
int array3[NUM_ELEMENTOS] = {50,40,30,20,10}; //pior caso

printf("\nEscolha uma opcao\n");
printf("1-Selection Sort\n");
printf("2-Insertion Sort\n\n");

scanf("%d", &x);

switch(x){
    case 1:
        printf("\nEscolha um caso:");
        printf("\n1- Melhor caso");
        printf("\n2- Caso mediano");
        printf("\n3- Pior caso\n\n");
        scanf("%d",&y);

        switch(y){
            case 1:
                puts("\nAntes da ordenação:");
                Imprime(array);
                puts("Depois da ordenação:");
                Selection(array);
                Imprime(array);
            break;

            case 2:
                puts("\nAntes da ordenação:");
                Imprime(array2);
                puts("Depois da ordenação:");
                Selection(array2);
                Imprime(array2); 
            break;

            case 3:
                puts("\nAntes da ordenação:");
                Imprime(array3);
                puts("Depois da ordenação:");
                Selection(array3);
                Imprime(array3);
            break;
        }
        break;
    case 2:
        printf("\nEscolha um caso:");
        printf("\n1- Melhor caso");
        printf("\n2- Caso mediano");
        printf("\n3- Pior caso\n\n");
        scanf("%d",&y);

        switch(y){
            case 1:
                puts("\nAntes da ordenação:");
                Imprime(array);
                puts("Depois da ordenação:");
                Insertion(array);
                Imprime(array);
            break;

            case 2:
                puts("\nAntes da ordenação:");
                Imprime(array2);
                puts("Depois da ordenação:");
                Insertion(array2);
                Imprime(array2);
            break;

            case 3:
                puts("\nAntes da ordenação:");
                Imprime(array3);
                puts("Depois da ordenação:");
                Insertion(array3);
                Imprime(array3);
            break;
        }
        break;
    //default:
}
    return 0;
}