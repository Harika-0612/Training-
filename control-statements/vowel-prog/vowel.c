#include<stdio.h>
#include<stdlib.h>
int main()
{
 char c;
 printf("Enter the character (a-z)");
 scanf("%c",&c);
 switch (c)
 {
   case 'a':
      printf("Vowel \n");
	  break;
   case 'e':
      printf("Vowel \n");
	  break;
   case 'i':
     printf("Vowel \n");
	 break;
   case 'o':
     printf("Vowel \n");
	 break;
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
     printf("Vowel \n");
	 break;
   default:
     printf("Consonant \n");
 }
return EXIT_SUCCESS;
}

