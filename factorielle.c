#include <stdio.h>
#include <stdlib.h>

int main(){
    int factorielle=1, nombre=0, n=0, erreur=0;

    do{
        if(erreur == 1){
            printf("/!\\ Nombre trop grand pour le calcul !\n");
        }
        printf("Encodez un nombre [0-10] : ");
        fflush(stdin);
        scanf("%d",&nombre);
        erreur = 1;
    }while(nombre < 0 || nombre > 10);

    if(nombre == 0){
        printf("\n-> La factorielle de %d vaut %d\n", nombre, factorielle);
    }else{
        for(n = 1; n <= nombre; n++){
            factorielle = factorielle * n;
        }
        printf("\n-> La factorielle de %d vaut %d\n", nombre, factorielle);
    }

    return 0;
}
