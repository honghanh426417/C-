/*
*MENU
*/
#include<stdio.h>

int main(){
  int ch;
  
  printf("\t\tMenu\n");
    printf("==================================\n");
    printf("\n 1.CF");
    printf("\n 2.HDJ ");
    printf("\n 3.C");
    printf("\n 4.DreamWeaver");
    printf("\n 5.RDBMS");
    printf("\n 6.Learn Java By Example");
    printf("\n==================================");
    printf("\nEnter your choice: ");
    scanf("\n %d", &ch);
    switch(ch){
      case 1: {
        printf("\nCF");
        break;
      }
      case 2: {
        printf("\nHDJ");
        break;
      }
      case 3: {
        printf("\nC");
        break;
      }
      case 4: {
        printf("\nDreamWeaver");
        break;
      }
      case 5: {
        printf("\nRDBMS");
        break;
      }
      case 6: {
        printf("\nLearn Java By Example");
        break;
      }
    
    default:
    printf("\nChon sai ");
    break;
    }
    
    
}
  