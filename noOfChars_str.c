/*number of characters in string*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
void Find_Vowels(char *,int *,int *,int *);
main()
{
        char a[30];
        int vowel,Consonants,Space;
        printf("\n Program to Find no of Vowels , Consonants and Space from a String \n");
        printf("\n-----------------------------------------------------------------------\n\n\n");
        printf("Enter Text : ");                                                   
        gets(a);
         
        strlwr(a);
         
        Find_Vowels(a,&vowel,&Consonants,&Space);
         
        printf("\nNo of Vowels : %d ",vowel);
         
        printf("\nNo of Consonants : %d ",Consonants);
         
        printf("\nNo of Space : %d ",Space);
         
        getch();
       
       
}
 
 void Find_Vowels(char *a,int *vowels,int *consonants,int *space)
     {
        int length=0;
        int v=0,c=0,s=0;
         
        while(*a!='\0')
        {
          if(*a==' ')
          {
              s++;  
          }
           
          if((*a=='a')||(*a=='e')||(*a=='i')||(*a=='o')||(*a=='e')||(*a=='u'))
          {
              v++;                                                           
                                                                                 
          }
             
          length++;
          a++;              
        }    
         
        c=length-(v+s);
         
        *vowels=v;
        *consonants=c;
        *space=s;
         
           
     }
