#include <stdio.h>
#include <malloc.h>
#include <limits.h>
int main(){
    system("clear");
    int min=INT_MAX;
    int *tuplam,n;
    printf("Massiv elemntlari sonni kiriting: ");
    scanf("%d",&n);
 
    tuplam=(int*)malloc(n*4);
    for(int i=0;i<n;i++)
    {
     scanf("%d",&tuplam[i]);
      if(tuplam[i]<min)
      {
        min=tuplam[i];
      }
    }
    printf("min = %d\n",min);
    printf("minimal qiymat almashgandan song  = %d\n",min+1);
    free(tuplam); 
   return 0;
}



