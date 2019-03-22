#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include "menu.h"

int main(){
int continuer=1;
SDL_Event e;
while (continuer){
   SDL_WaitEvent(&e);
   
   afficher();
}
return 0; 
 }     
      

  
            

		

        


