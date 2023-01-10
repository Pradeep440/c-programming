#include<stdio.h>
#include<string.h>
void main(){
   int i,j,n,p;
   char words[50][50],cp[50],order;
   printf("Enter number of names :\n");
   scanf("%d",&n);
   printf("Enter the order(A/D):");
   scanf(" %c",&order);
   printf("Enter the position:");
   scanf("%d",&p);
   printf("Enter names in any order:\n");
   for(i=0;i<n;i++){
      scanf("%s",words[i]);
   }
   if(order=='A'){
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(words[i],words[j])>0){
            strcpy(cp,words[i]);
            strcpy(words[i],words[j]);
            strcpy(words[j],cp);
         }
      }
   }
   }
   else{
        for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(words[i],words[j])<0){
            strcpy(cp,words[i]);
            strcpy(words[i],words[j]);
            strcpy(words[j],cp);
         }
      }
   } 
   }
   printf("\nThe sorted order of names are:\n");
   for(i=0;i<n;i++){
      printf("%s\n",words[i]);
   }
   if(p>0){
   printf("%dnd word in order:",p);
   printf("%s",words[p-1]);
   }
   else{
   	printf("invalid");
   }
}


output
Enter number of names :
5
Enter the order(A/D):A
Enter the position:1
Enter names in any order:
Banana
Carrot
Radish
Apple
Jack

The sorted order of names are:
Apple
Banana
Carrot
Jack
Radish
1nd word in order:Apple
