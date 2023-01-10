#include<stdio.h>
int main()
{
int initial,final,a,b,c;
printf("Enter the range : ");
scanf("%d",&final);
printf("The Pythogorean Triplets in the given range are :\n");
for(a=1;a<=final;a++){
for(b=a;b<=final;b++){
for(c=b;c<=final;c++){
if(c*c==a*a+b*b){
printf("%d , %d , %d\n",a,b,c); }            
}
}
}
}

output
Enter the range : 12
The Pythogorean Triplets in the given range are :
3 , 4 , 5
6 , 8 , 10

Enter the range : 1.5
The Pythogorean Triplets in the given range are :


Enter the range : 25
The Pythogorean Triplets in the given range are :
3 , 4 , 5
5 , 12 , 13
6 , 8 , 10
7 , 24 , 25
8 , 15 , 17
9 , 12 , 15
12 , 16 , 20
15 , 20 , 25

A=-10
invalid
