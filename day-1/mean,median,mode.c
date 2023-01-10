#include<stdio.h>
int main(){
int ans = 1; while(ans){
float a[100],mean,median,mode,temp,sum = 0,max=0,t[100];
int i,s,p,j;
long long int n;
printf("Enter How many Elements : ");
scanf("%11d",&n);
for(i = 0;i<n;i++ ){ printf("Enter : ");
scanf("%f",&a[i]); sum = sum + a[i];
}

printf("\nThe Mean of the Given arraynof numbers is : %.2f\n",sum/n);
for(i = 0;i<n;i++){
for(j = 0;j<n-i-1;j++){
if(a[j] > a[j+1]){ temp = a[j]; a[j] =a[j+1] = temp;
}
}
}
for (i = 0;i<n;i++ ){
printf("%.2f\t",a[i]);
}
printf("\n"); if(n%2 == 0){	s = n/2;
s = n/2;
median = (a[s] + a[s-1])/2;
}
else{
p = ((n-1)/2);
median = a[p];
}
printf("\nThe Median of the Given array of numbers is : %.2f\n",median);
for(i = 0;i < n;i++){
	
for(j = i+1;j<n;j++){ if(a[i] == a[j]){t[i]++;
}
}
}
max = 0;
mode = 0;
for(i = 0;i<=n;i++){ if(t[i]>max){
mode = a[i]; max = t[i];
}
}
printf("\nThe Mode of the Given array of numbers is : %.2f\n",mode);
printf("Do you want to continue ? ");
scanf("%d",&ans);
printf("\n");
}
}




output

Enter How many Elements : 7
Enter : 16
Enter : 18
Enter : 27
Enter : 16
Enter : 23
Enter : 21
Enter : 19

The Mean of the Given arraynof numbers is : 20.00
16.00   18.00   27.00   27.00   27.00   27.00   27.00

The Median of the Given array of numbers is : 27.00

The Mode of the Given array of numbers is : 16.00
