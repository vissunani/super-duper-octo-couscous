#include<stdio.h>
    

#include<stdlib.h>
   
 int main()

       {
      
        FILE *fp;
   
           char str[80];

      
        fp = fopen("file1.txt","r");   
         //Statement   1

           
   if(fp == NULL)
       
       {
                 
    printf("\nCan't open file or file doesn't exist.");
       
              exit(0);
           
   }

         
     printf("\nData in file...\n");

    
          while((fgets(str,80,fp))!=NULL)
      
        {
			  
                
     fputs(str,fp);
               
      printf("%s",str);
  
               }

           
   fclose(fp);
  
     }