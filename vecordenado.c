#include"vecordernado.h"

void cargar( int vec[]){

int i;

puts(" Introduzca los elementos del vector: ");

for(i=0;i<5;i++){

    fflush(stdin);
    scanf("%d",&vec[i]);
}
ordenar(vec,5);

puts("\nvector ordenado ");

for(i=0;i<5;i++){
printf("\n posicion %d : %d",i,vec[i]);
}
}

void ordenar(int vec[],int n){
int i, cota=n,k=1,aux;



while(k!=0){
    k=0;

    for(i=1;i<cota;i++){
            if(vec[i-1]>vec[i]){
                aux=vec[i-1];
                vec[i-1]=vec[i];
                vec[i]=aux;
                k=i;
            }

    }
    cota=k;
}



}
