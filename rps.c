#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
     int user, comp;

     srand(time(0));

     while (1)
     {
        printf(" \nEnter your move: \t 0 for ROCK \t 1 for Papper \t 2 for siccor \t 9 for exit \n");
        scanf("%d",&user);

        comp=rand() %3;
        
         if (user < 0 || user > 2) {
            printf("Invalid input. Please try again.\n");
            continue;
        }

        

        if(user == 9){
            exit(0);
        }
        else if(user== 0 && comp ==1 ){
            printf("computer choose paper. so computer win!");
            }

            else if (user == 0 && comp ==2){
            printf("computer choose rock. so you win!");
            }
            else if(user==1 && comp==0){
                printf("computer choose rock. so you win!");
            }
            else if (user==1 &&comp==2 ){
                printf("computer choose sissor.so computer win!");
            }
            else if (user==2 && comp==0)
            {
                printf("computer choose rock. so computer win!");
            }
            
           else if (user ==2 && comp==1)
           {
            printf("computer choose papper. so you win");
           }
           else{
            printf ("WOW! GAME DRAW");
           }
           
            
            
        }   
     


     return 0;
     
}

