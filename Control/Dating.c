#include <stdio.h>

int main (){
    char ShelovesYou;
    char YouloveHer;

    printf("Do you love her?(T for true or F for false): \n");
    scanf(" %c", &YouloveHer);

    printf("Does she love you?(T for true or F for false): \n");
    scanf(" %c", &ShelovesYou);

   if ((ShelovesYou == 'T') && (YouloveHer == 'T')){
        printf("Commit \n");
   }else if (!(ShelovesYou == 'F') && (YouloveHer == 'F')){
        printf("Tricky!! Just Let Her Go Mahn \n");
   }else if ((ShelovesYou == 'F') && (YouloveHer == 'T')){
        printf("No way!! Just Move on Mahn \n");
   }else {
        printf("Clearly Both of aren't in love . Study for exams!! \n");
   }

    return 0;
}