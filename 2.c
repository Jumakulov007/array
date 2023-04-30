#include <stdio.h>
#include <malloc.h>
#include <limits.h>
int main(){
    system("clear");
    int max=INT_MIN;
    int *tuplam,n;
    printf("Massiv elemntlari sonni kiriting va kiritgan soningizni osib borish tartibida yoki kamayib borish tariribida kiriting: ");
    scanf("%d",&n);
 
    tuplam=(int*)malloc(n*4);
    for(int i=0;i<n;i++)
    {
     scanf("%d",&tuplam[i]);
      if(tuplam[i]>max)
      {
       max=tuplam[i];
      }
       
    } 
    printf(" avvalgi max = %d\n",max);
   printf("max qiymat ochirilgandan song = %d\n",max-1);
   free(tuplam); 
   return 0;
}



