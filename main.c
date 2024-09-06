#include<stdio.h>


int main(){
    int NombreEtudinat , option  , counteurNote = 0; 
    float moyenne ;
    int countValide = 0, countRatt = 0 ;
    printf("Entre le nombre des etudiant : ");
    scanf("%d", &NombreEtudinat );


    int TableauNote[NombreEtudinat];
    for (int i = 0; i < NombreEtudinat; i++)
    {
        printf("Entre la note de etudiant %d : ", i+1);
        scanf("%d", &TableauNote[i] );
    }
    int notEnve = TableauNote[0];
    int notBas = TableauNote[0];    

    while (1)
    {
        printf("\n");
        printf("1 - calculer la moyenne des notes \n");
        printf("2 - Trouver la note la plus elevee et la plus basse \n");
        printf("3 - Afficher touts les notes superieures a la moyenne \n");
        printf("4 - Compter le nombre d'etudiant ayant valide (note >= 12) \n");
        printf("5 - Compter le nombre d'etudiant en rattrapage (note < 12) \n");
        printf("Entre le nombre de commend : ");
        scanf("%d", &option);

        switch (option)
        {
        case 0:
        return 0;
        break;
        case 1:
            for (int i = 0; i < NombreEtudinat; i++){
                counteurNote = counteurNote + TableauNote[i];
            }
            moyenne = counteurNote / NombreEtudinat ;
            printf("------- la moyenne des note est : %.2f \n", moyenne);
            printf("Entre 0 pour quiter le programme: \n");
            printf("Entre 1 pour contyner : \n");
            scanf("%d", &option);
            if(option == 0){
                return 0 ;
            }
            
            
            break;
        case 2:
            for (int i = 1; i < NombreEtudinat; i++){
                if(notEnve < TableauNote[i]){
                    notEnve = TableauNote[i] ;
                }
            }
            printf("------- la note le plus elevee est : %d \n", notEnve);

            for (int i = 1; i < NombreEtudinat; i++){
                if(notBas > TableauNote[i]){
                    notBas = TableauNote[i] ;
                }
            }
            printf("------- la note le plus base est : %d \n", notBas);
            printf("\n");
            printf("Entre 0 pour quiter le programme: \n");
            printf("Entre 1 pour contyner : \n");
            scanf("%d", &option);
            if(option == 0){
                return 0 ;
            }
            
            break;
        case 3:
            for (int i = 0; i < NombreEtudinat; i++){
                counteurNote = counteurNote + TableauNote[i];
            }
            moyenne =  counteurNote / NombreEtudinat ;
            for (int i = 0; i < NombreEtudinat; i++){
                if (TableauNote[i] > moyenne){
                    printf("-- %d \n", TableauNote[i]);
                }
            }
            printf("\n");
            printf("Entre 0 pour quiter le programme: \n");
            printf("Entre 1 pour contyner : \n");
            scanf("%d", &option);
            if(option == 0){
                return 0 ;
            }
            
            break;
        case 4:
            for (int i = 0; i < NombreEtudinat; i++){
                if(TableauNote[i] >= 12){
                    countValide++;
                }
            }
            printf("------- les notes valider : %d  \n", countValide);
            printf("\n");
            printf("Entre 0 pour quiter le programme: \n");
            printf("Entre 1 pour contyner : \n");
            scanf("%d", &option);
            if(option == 0){
                return 0 ;
            }
            
            break;
        case 5:
            for (int i = 0; i < NombreEtudinat; i++){
                if(TableauNote[i] < 12){
                    countRatt++ ;
                }
            }
            printf("------- les rettrapage :  \n", countRatt);
            printf("\n");
            printf("Entre 0 pour quiter le programme: \n");
            printf("Entre 1 pour contyner : \n");
            scanf("%d", &option);
            if(option == 0){
                return 0 ;
            }
            
            break;
        
        default:
            break;
        }
        
    }
    
    



    return 0;
}