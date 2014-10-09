#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct resor {

  int *busslinje;
  char * station1;
  char * station2;
  int *tid; 
  int *tPointer;

  

} Resor;

void readline(char *dest, int n, FILE *source){
  fgets(dest, n, source);
  int len = strlen(dest);
  if(dest[len-1] == '\n')
    dest[len-1] = '\0';
}


int readFile() {
  FILE *fp;
  
  char str[100];

  char bl[100];


  char p;

  fp = fopen("nätverk.txt","r");

  while (1)
    {
      fgets(bl, 300, fp);


      /*MALLOC OCH STRING COPY OCH FREE SPACE

STRCMP ('CENTRALSTATIONEN', S2
*/
     
      char s1[100];
      char s2[100];
      char t[100];
      char *s1Pointer;
      char *s2Pointer;
      char *tPointer;
      

      

    if( feof(fp) )
      {

	break;
      }
    p = fscanf(fp, "%[^,], %[^,], %[^,], %[^,]\n",bl, s1, s2,t);

    
    /*  int wordCounter = 0;

    char *word [300];
    
    while (strlen("centralstation") != wordCounter){
      
      int i = 0;
      int s = 0;
      
      *word[i] = s1[s];
      
      i++;
      s++;
      wordCounter++;
      
     
      
      
      
      }*/
    
    /*  char *foo = "akademiska";
    readline((foo), 15, fp);
    */
  
    int i = 0;
    int string = 100;
    
    
    char *string1 = strcpy(string1, "centralstationen");
    
    for (i=0; i<string; i++){
      
      int *result;
      *result = strcmp(string1,s1[i]);
      
      
      if (result == 0)  printf("fungerar  %s \n",(s1[i]));
    
      i++;
    }
  

    
    // printf( " %s, %s, %c\n",bl,s1, s2[1]);
    }
    
    
  
  
  // printf( "%s \n", s2) ;
    
    
   
    //    printf( "%s, %s, %s, %s \n", bl, s1, s2, t) ;

   

	//	p =  fscanf(fp, "%[^,], %[^,], %[^,], %[^,], \n", bl, s1,s2, t) ; 
  

  

  fclose(fp);
  
  return(0);
  
}





int main(){

  readFile();


}
